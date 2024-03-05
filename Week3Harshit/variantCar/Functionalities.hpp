#include "ElectricCar.hpp"
#include "DieselCar.hpp"
#include<memory>
#include<variant>
#include<vector>
#include<functional>
#include "EmptyContainer.hpp"
#include<thread>
#include<mutex>
#include<future>




using ElectricPtr = std::shared_ptr<ElectricCar>;
using DieselPtr = std::shared_ptr<DieselCar>;
using Vtype = std::variant<ElectricPtr, DieselPtr>;
using Container = std::vector<Vtype>;
using fnType = std::function<void(const Container&)>;
using ActionContainer = std::vector<fnType> ;
using ThreadContainer = std::vector<std::thread>;

//async
using AsyncContainer = std::vector<std::future<void>>;


void MakingVariant(Container& var, ActionContainer& fn);


//making common action like name
void Adaptor(const Container& var, const ActionContainer& fn);

void CommonActionName(const Container& var);

void CommonActionRange(const Container& var);

void CommonActionMaxPower(const Container& var);

void UnCommonActionTankSize(const Container& var);

void UnCommonActionBatteryLimit(const Container& var);

void UnCommonActionBatteryChargingTime(const Container& var);

extern fnType Name;
extern fnType Range;
extern fnType MaxPower;
extern fnType TankSize;
extern fnType BatteryLimit;
extern fnType BatteryChargingTime;

void MakingThreads(ThreadContainer& th, ActionContainer& fn, const Container& var);

void JoinThreads(ThreadContainer& th);

void MakingAsyncThread(AsyncContainer& As, ActionContainer& fn, const Container& var);

void AsyncGetThread(AsyncContainer& As);


