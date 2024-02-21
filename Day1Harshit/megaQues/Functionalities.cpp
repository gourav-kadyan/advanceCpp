#include "Functionalities.hpp"
#include "ElectricCar.hpp"

void CreateObjects(std::vector<Car*>& data){
    // Car*c1 = new ElectricCar("NexonEv", 80, 150 , 18000.90f, 33, 2, 300, 600, 320);
    // data.push_back(c1);

    // not do this you are making two pointer due to coping

    data.push_back(new ElectricCar("NexonEv", 80, 150 , 18000, 33, 2, 300, 600, 320));
    data.push_back(new ElectricCar("XUV400", 80, 150 , 18000, 331, 12, 300, 600, 320));
    data.push_back(new ElectricCar("EV", 80, 150 , 18000, 331, 21, 300, 600, 320));

}

void DeleteObjects(std::vector<Car*>&data){
    // for(int i=0;i < data.size();i++){
    //     delete data[i];
    // }

    //modern

    for(Car* p : data){ 
        delete p;
    }

}