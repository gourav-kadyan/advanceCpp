#include "Functionalities.hpp"

void line(){
    std::cout << "\n\n**************************************\n\n";
}

int main(int argc, char const *argv[])
{
    Container obj;
    CreateObjects(obj);
    try{
        Container val = PermitTypeCondition(obj,1);
        for(VehicalPtr it : val){
            std::cout << *it << "\n";
        }

        line();

        float avg = AvgPerType(obj,2);
        std::cout << avg << " is Avg as per Given type\n";
        
        line();

        unsigned long serial = MaxPerBookingCharge(obj);
        std::cout << serial << " is Max Booking Charge serial Number\n";

        line();

        Container temp = FirstNInstances(obj, 1);
        for(VehicalPtr it : temp){
            std::cout << *it << "\n";
        }

    }
    catch(std::exception &ex){
        std::cerr << ex.what() << '\n';
    }
    return 0;
}
