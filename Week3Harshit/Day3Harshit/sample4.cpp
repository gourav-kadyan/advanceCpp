#include<iostream>
#include<functional>
#include<vector>



using FN = std::function<int(int,int)>; 
FN fn = [](int a,int b)->int{

    return a+b;
};

FN bindFn = std::bind(fn,std::placeholders::_1,20);

int main(int argc, char const *argv[])
{
    std::vector<FN>vc {fn,bindFn};
    return 0;
}
