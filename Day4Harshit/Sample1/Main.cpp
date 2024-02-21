#include "Car.hpp"
#include "Functionalities.hpp"

int main()
{   //not madatory to write same like marathon mostly based on logic;
    Container data;
    CreateObjects(data);
    try{
        int AccumulatedHorsePower = TotalHorsePower(data);
        std::cout << "Total Horse Power is : " << AccumulatedHorsePower << "\n";
        float result = AverageEngineTorque(data);
        std::cout << "Average Engine Torque : " << result << "\n";
        std::string model = FindCarModelByID(data,"c101");
        std::cout << "Model of the Car is : " << model << "\n";
        bool flag = IsAllCarAbove700000(data);
        if(flag){
            std::cout << "All car are Above 700000" << "\n";
        }
        else{
            std::cout << "Not All Car are Above 700000" << "\n";
        }
        Engine* e = EnginePointerToMinPriceCar(data);
        std::cout << "Engine Found: " << *e << "\n";
       // DeleteObjects(data);
    }
    catch(const EmptyContainerException& ex){
        std::cerr << ex.what() << "\n";
    }
    catch(const IdNotFoundException& ex){
        std::cerr << ex.what() << "\n";
    }

    return 0;
}