/*
    Objective:
        Designe a consumer for :    
            -making allocation on the heap for 10 mins
            -calculating sum of the first N natural numbers, Where N is accept in the function and return the value

        Producer thread for : 
            - launching a consumer accepting N and passing to consumer 
*/

#include<iostream>
#include<future>
#include<functional>

int Consumer(std::future<int> &ft){
    int *ptr = (int*) malloc(40);
    auto f1 = [](int number) -> int {return number * number;};
    for(int i=1;i<=10;i++){
        ptr[i-1] = f1(i);
    }
    for(int i=1;i<=10;i++){
        std::cout << ptr[i-1] << '\n';
    }
    //after the ft we get --> future value
    int n = ft.get();//wait + fetch value **IMP--> DO NOT ACCESS 2 TIMES OR MORE
    return (n * (n+1))/2;
}


int main(){
    std::promise<int> pr;
    std::future<int> ft = pr.get_future();

    std::future<int> res  = std::async(&Consumer, std::ref(ft));
    int val;
    std::cin >> val;
    pr.set_value(val);
    std::cout << "The ans is : " << res.get() << '\n';

}