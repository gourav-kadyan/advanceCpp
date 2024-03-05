#include "Functionalities.hpp"


void CreateObjects( Container &data)
{
    data[0] = std::make_shared<Car>(
        "c101",
        790000.0f,
        "DZire",
        std::make_shared<Engine>(300,110.0f),
        CarType::SEDAN
    );

    data[1] = std::make_shared<Car>(
        "c102",
        1479000.0f,
        "City",
        std::make_shared<Engine>(250,100.0f),
        CarType::HATCHBACK
    );

    data[2] = std::make_shared<Car>(
        "c103",
        109000.0f,
        "Nano",
        std::make_shared<Engine>(250,100.0f),
        CarType::HATCHBACK
    );
}

// void DeleteObjects( Container &data)
// {
//     if(data.empty()){
//         throw EmptyContainerException("Data is Empty");
//     }
//     //engine 
//     for(Car* c: data){
//         delete c->engine();
//         delete c;
//     }
// }

int TotalHorsePower(const Container &data)
{
    if(data.empty()){
        throw EmptyContainerException("Data is Empty");
    }
    int Total = 0;
    for(const CarPtr& c:data){
        Total += c->engine()->horsepower();
    }
    return Total;
}

bool IsAllCarAbove700000(const Container &data)
{
    if(data.empty()){
        throw EmptyContainerException("Data is Empty");
    }
    for(const CarPtr& c:data){
        if(c->price() <= 700000.0f){
            return false;
        }
    }
    return true;
}

EnginePtr EnginePointerToMinPriceCar(const Container &data)
{
    if(data.empty()){
        throw EmptyContainerException("Data is Empty");
    }
    float price = data[0]->price();
    EnginePtr e = data[0]->engine();
    for(const CarPtr& c : data){
        if(price < c->price()){
            price = c->price();
            e = c->engine();
        }
    }
    return e;
}

float AverageEngineTorque(const Container &data)
{
    if(data.empty()){
        throw EmptyContainerException("Data is Empty");
    }
    float Avg = 0.0f;
    for(const CarPtr& c : data){
        Avg += c->engine()->torque();
    }
    return Avg/data.size();
}


/*
    int arr[] = {1,2,3}
    Engine e1(1,2,3)
    Engine *e2 = new Engine(500,600);

    //uniform initialization --> modern cpp syntax
    int arr[] {1,2,3}
    Engine e1{1,2,3}
    Engine *e2 {new Engine{500,600}}

*/
