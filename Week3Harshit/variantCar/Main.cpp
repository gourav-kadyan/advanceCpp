#include "Functionalities.hpp"

int main(int argc, char const *argv[])
{
    
    Container var;
    ActionContainer fn;
    ThreadContainer th;
    AsyncContainer As;
    MakingVariant(var,fn);
    MakingThreads(th,fn,var);
    JoinThreads(th);
    MakingAsyncThread(As,fn,var);
    AsyncGetThread(As);


    // try
    // {
    //     CommonActionName(var);
    //     CommonActionRange(var);
    //     CommonActionMaxPower(var);

    //     UnCommonActionTankSize(var);
    //     UnCommonActionBatteryLimit(var);
    //     UnCommonActionBatteryChargingTime(var);

    //     Adaptor(var, fn);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    

    return 0;
}
