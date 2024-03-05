#include<iostream>
#include<array>
#include<thread>

// delay

/*
                                                            -----------------> cube ends
                                                            |                   |
                                                            |                   |
    program starts                                          |                   --------> stops
    <---------------------->Square()                    Cube starts
                                |                       |
                                |                       |
                                |                       |
                                -------------------> Square end

    
    *******************************************************************************************************


    CONCURRENCY, PARALELLISM ETC


                 ----------------SQUARE START --------------------------------
                /
                |
                |
    --------> starts                                                            --------------STOPS
                |
                |
                \
                 -----------------CUBE START---------------------------------
*/

#include<functional>
#include<mutex>

std::mutex mt; // mutex is a binary semaphore


void Square(std::array<int,5>& data){
    for(int number : data){
        //use artificial delay
        std::this_thread::sleep_for(std::chrono::seconds(1));

        //only 1 executing entity should be doing this 
        mt.lock();
        std::cout << "Square of : " << number << " is : " << number * number << '\n';
        mt.unlock();
    }
}

void Cube(std::array<int,5>& data){
    for(int number : data){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        mt.lock();
        std::cout << "Cube of : " << number << " is : " << number * number * number << '\n';
        mt.unlock();
    }
}

    /*
        main thread start create an array object
        in local stack memory */

int main(int argc, char const *argv[])
{
    std::array<int,5> arr {1,2,3,4,5};

    // Square(arr);
    // Cube(arr);

    /*
        we launch a new thread 

        A thread is a mini program. As the developer, t1 object is a "handle" for me to interact with the thread
        in a same way. This t1 is attached to square mini program We have also passed "data" by reference which is required by the square function
    */
    std::thread t1(&Square, std::ref(arr));

   /* we launch a new thread 

        A thread is a mini program. As the developer, t2 object is a "handle" for me to interact with the thread
        in a same way. This t2 is attached to square mini program We have also passed "data" by reference which is required by the square function */
    std::thread t2(&Cube, std::ref(arr));

    //signal as a result/summary/satisfaction

    //signal came when main is alive 

    //join : wait for a thread 
    /*
        use -lpthread for g++ to run threading program

        ** if you dont join then give runtime error / segmentation fault
    */

   t1.join();//not goes to next instruction until the signal is arrive
   /*
    t1.join()
        a - t1 crashes --> exception --> still give signal to main
        b - t1 does finish even before t2 starts
        c - t2 already finish even before t1 is started 
        and many more at the end it still give signal
   */
   t2.join();

   std::cout << "\nMain End\n";
    
    return 0;
}

/*

    thread is a mini program 
        once you make a thread its a program (Independent)

    once you make a thread --> you loose control --> OS decide it which goona run first

    dont do creativity like what happend when we do this

    whenever you running thread --> because of data read write ---> give problem --> data synchronous write 
        --> so we add mutex, critical section, scope base recursive 

*/
