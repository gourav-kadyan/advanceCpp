/*

    triggers app

    f1 -----------------> f2(2 integers will be created)
                            |
                            |
                        predicate to filter the data
*/

#include <iostream>
#include <functional>

// void f2(int n1, int n2){
//     auto lamda_fn = [](int n1, int n2){ return n1 + n2; };

//     std::cout << lamda_fn(10,20);  //bad version
// }


//better version
// void f2(int n1, int n2){

//     /*
//         A lamda can capture data from  its enclosing function without explicit passing
//         here & -- capture all values by reference

//         if you wanna copy it just use '=' for this no need to paste
//     */
//     auto lamda_fn = [ & ](  ){ return n1 + n2; };

//     std::cout << lamda_fn();


// }

std::function<int()> f2(int n1, int n2){
    auto lamda_fn = [&]() { int val = 99; return n1 + n2 + val + 1;};
    lamda_fn();
    return lamda_fn;
}

void f1(){
    // int n = 10;
    // int n2 = 20;
    // f2(n, n2);

    int n1 = 10;
    int n2 = 20;
    std::function<int()> modified = f2(n1,n2);
    std::cout << modified() << '\n';
}

void trick (){
    int n1 = 100;
    //all copies not modifible unless you use mutable
    auto f1 = [&n1] () mutable {
        n1 = 99;
    };
    std::cout << n1 ;
}

//like rust you have to marks as mutable

int main(){
    trick();
    return 0;
}

//lamda behave like a function --> but its an object

/*
    main stack memory

    f1 -_ stack memory
    n1            n2
    [10]          [20]
    0x78          0x99

    f2 stack memory
    n1            n2
    [10]          [20]
    0x87          0x768

    lamda_fn //if lamda can see the both n1 and n2 but we idiotically copy paste it
    [............]
    0x77H
    we copy n1 and n2

*/

/*
    capture close


    void magice(){
        int n1 = 10;
        int n2 = 20;

        //example 1 - all data values from "enclosing function" are accessible inside f1
        auto f1= [&](){ return n1 +  n2;};

        //example2 - selected  data values capture by copy 
                   only n1 is accessible , n2 is not we get error 
        auto f1= [n1](){ return n1 +  n2;};

        
        //example3 - selected  data values capture by copy 
                   only n1 and n2 is accessible 
        auto f1= [n1,n2](){ return n1 +  n2;};

        //example4 - selected  data values capture by reference 
                   only n1 and n2 is accessible 
        auto f1= [&n1,&n2](){ return n1 +  n2;};

        //example6 - all values capture by copy
        auto f1= [=](){ return n1 +  n2;};

        //example7 - selected  data values capture by copy and by ref
                   only n1 and n2 is accessible 
        auto f1= [n1,&n2](){ return n1 +  n2;};

        //you can also copy the object/class by capturing 'this' in capture close

    }
*/


