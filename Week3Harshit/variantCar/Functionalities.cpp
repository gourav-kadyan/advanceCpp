#include "Functionalities.hpp"
std::mutex mt;
void MakingVariant(Container &var, ActionContainer& fn)
{
    ElectricPtr elec = std::make_shared<ElectricCar>("Volvo X", 450.0f, 180.0f, 7.5f, 555.5f);
    DieselPtr dec = std::make_shared<DieselCar>("Bugatti Veyron", 999.9f, 99.9f, 19.9f);

    var.push_back(elec);
    var.push_back(dec);

    fn.push_back(Name);
    fn.push_back(Range);
    fn.push_back(MaxPower);
    fn.push_back(TankSize);
    fn.push_back(BatteryLimit);
    fn.push_back(BatteryChargingTime);
}

void Adaptor(const Container &var,const  ActionContainer &fn)
{
    for(fnType it : fn){
        it(var);
    }
}

void CommonActionName(const Container &var)
{

    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        std::visit(
            [](auto&& val){
                std::cout << "Car Name : " << val->name() << '\n';
            },
            it
        );
    }
}

fnType Name = [](const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        std::visit(
            [](auto&& val){
                std::lock_guard<std::mutex> lk(mt);
                std::cout << "Car Name : " << val->name() << '\n';
            },
            it
        );
    }
};

void CommonActionRange(const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        std::visit(
            [](auto&& val){
                std::cout << "Range : " << val->range() << '\n';
            },it
        );
    }
}

fnType Range = [](const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        std::visit(
            [](auto&& val){
                std::lock_guard<std::mutex> lk(mt);
                std::cout << "Range : " << val->range() << '\n';
            },it
        );
    }
};

void CommonActionMaxPower(const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        std::visit(
            [](auto&& val){
                std::cout << "Max Power : " << val->maxPower() << '\n';
            }, it
        );
    }
}

fnType MaxPower = [](const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        std::visit(
            [](auto&& val){
                std::lock_guard<std::mutex> lk(mt);
                std::cout << "Max Power : " << val->maxPower() << '\n';
            }, it
        );
    }
};

void UnCommonActionTankSize(const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        if(std::holds_alternative<DieselPtr>(it)){
            DieselPtr dex = std::get<1>(it);
            std::cout << "Tank Size : " << dex->tankSize() << '\n';
        }
    }
}

fnType TankSize = [](const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        if(std::holds_alternative<DieselPtr>(it)){
            DieselPtr dex = std::get<1>(it);
            std::lock_guard<std::mutex> lk(mt);
            std::cout << "Tank Size : " << dex->tankSize() << '\n';
        }
    }
};



void UnCommonActionBatteryLimit(const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        if(std::holds_alternative<ElectricPtr>(it)){
            ElectricPtr ex = std::get<0>(it);
            std::cout << "Battery Limit : " << ex->batteryLimit() << '\n';
        }
    }
}

fnType BatteryLimit = [](const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        if(std::holds_alternative<ElectricPtr>(it)){
            ElectricPtr ex = std::get<0>(it);
            std::lock_guard<std::mutex> lk(mt);
            std::cout << "Battery Limit : " << ex->batteryLimit() << '\n';
        }
    }
};

fnType BatteryChargingTime = [](const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }

    for(Vtype it : var){
        if(std::holds_alternative<ElectricPtr>(it)){
            std::lock_guard<std::mutex> lk(mt);
            std::cout << "Battery Chargin Limits : " << std::get<0>(it)->batterChargingTime() << '\n';
        }
    }
};


void UnCommonActionBatteryChargingTime(const Container &var)
{
    if(var.size() == 0){
        throw EmptyContainer("The Given Container is Empty");
    }
    
    for(Vtype it : var){
        if(std::holds_alternative<ElectricPtr>(it)){
            std::cout << "Battery Chargin Limits : " << std::get<0>(it)->batterChargingTime() << '\n';
        }
    }
}

void MakingThreads(ThreadContainer &th, ActionContainer &fn, const Container& var)
{
    for(fnType it : fn){
        // std::lock_guard<std::mutex> lk(mt);
        th.push_back(std::thread(it,std::ref(var)));
    }
}

void JoinThreads(ThreadContainer &th)
{
    for(std::thread &it : th){//you cannot copy thread so use & with "it"
        if(it.joinable()){
            it.join();
        }
    }
}

void MakingAsyncThread(AsyncContainer &As, ActionContainer &fn, const Container &var)
{
    for(fnType it : fn){
        As.push_back(std::async(it,std::ref(var)));
    }
}

void AsyncGetThread(AsyncContainer &As)
{
    for(std::future<void> &it : As){
        it.wait();
    }
}
