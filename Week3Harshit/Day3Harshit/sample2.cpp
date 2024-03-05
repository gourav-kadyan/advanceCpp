#include<iostream>
#include<future> //
#include<functional>


int factorial(/*number*/ std::future<int>& ft ){

    int *ptr = (int* )malloc(4); // line can be executed b4 the event

    //wait for event
    int n = ft.get();// this thread will now get blocked till input comes
    int result = 1;
    for(int i=2;i<=n;i++){
        result *= i;
    }
    *ptr = result;
    std::cout << "\nFactorial of : " << n << " is : " << *ptr << '\n';
    return result;
}

int main(){

    //want to launch factorial 
    int value = 0;

    //make a promise : compiler, I will give you an integer IN FUTURE
    std::promise<int> pr;
    std::future<int> ft = pr.get_future();
    std::future<int> result = std::async(&factorial, std::ref(ft)); // make a channel to communicate btw producer and consumer
    std::cin >> value;
    //promise to fulfill
    pr.set_value(value);


    //what if main wants to do something after factorial?

    //result.get();
    //result.wait();//waiting to thread finish the work //buffer manupulation is the reason
    std::cout << std::endl << result.get() << '\n';

    return 0;
}


// producer --> promise , consumer --> future
//promise is used for setting the value in produces
//future is used for getting the value in consumer
