#include "Car.hpp"
#include "Functionalities.hpp"
#include<thread>
#include<future>

int main()
{   //not madatory to write same like marathon mostly based on logic;
    Container data,beta;
    // CreateObjects(data);
    std::thread t1 (CreateObjects, std::ref(data));
    if(t1.joinable()){
        t1.join();
    }
    try{
        std::future<int> AccumulatedHorsePower = std::async(TotalHorsePower, std::ref(beta));
        std::cout << "Total Horse Power is : " << AccumulatedHorsePower.get() << "\n";

        std::future<float> result = std::async(AverageEngineTorque,std::ref(data));
        std::cout << "Average Engine Torque : " << result.get() << "\n";



        std::future<std::string> model = std::async(FindCarModelByID,std::ref(data),"c1gjfhi01");
        std::cout << "Model of the Car is : " << model.get() << "\n";


        std::future<bool> flag = std::async(IsAllCarAbove700000,std::ref(data));
        if(flag.get()){
            std::cout << "All car are Above 700000" << "\n";
        }
        else{
            std::cout << "Not All Car are Above 700000" << "\n";
        }
        // std::future<Engine*> e = std::async(EnginePointerToMinPriceCar,std::ref(data));
        // std::cout << "Engine Found: " << *(e.get()) << "\n";
        std::thread t2(DeleteObjects,std::ref(data));
        t2.join();
    }
    catch(const std::future_error& ex){
        std::cerr << ex.what() << "\n";
    }
    //int arr[3] = {1,2,33}
    //int arr[3] = {0,0,0}

    return 0;
}