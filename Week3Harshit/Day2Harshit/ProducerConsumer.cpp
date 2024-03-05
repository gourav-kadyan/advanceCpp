// ***************************** PRODUCER CONSUMER ************************************************

/*
    2 threads (2 workers)
        - main thread (producer) : take input and "make  value available"
        - operation (t1) (consumer): once a signal is recieved from main to indicate "input recieved",
            calculate the square

                reason to start t1 in advance : 

                    - programmer calculates how many workers are required and trigger them at a time [thread pooling]
                    [thread pooling] --> going to avail in cpp26

                    - t1 may want to do some other work even before data input is received 

*/

/*
    process vs thread : Concrete difference or abstract
    worker --> may be process or thread -->just dont care 
*/

#include<iostream>
#include<thread>
#include<condition_variable> // it can check whether production is done or not


int value = 0;
bool flag = false;
std::mutex mt;
std::condition_variable cv;

void Operation() {
    int *ans = (int*)malloc(4);
    ///need something for signal
    std::unique_lock<std::mutex> ul(mt);
    cv.wait(ul,[&](){return flag;});//if else, release mutex immediatly
    *ans = value * value;
    std::cout << "Square of " << value << " is " << *ans << '\n';
    ///
    free(ans);
}

void Inputs(){
    //apply lock on mutex Lock will applied till the end of function
    //welcome to deadlock
    //no other thread can apply lock on the same mutex before function
    std::lock_guard<std::mutex> lg(mt);
    std::cin >> value;
    flag = true;
    
}

int main(){
    std::thread t(Operation);

    ////apply lock on mutex Lock will applied till the end of main
    ////welcome to deadlock
    ////no other thread can apply lock on the same mutex before main
    // std::lock_guard<std::mutex> lg(mt);
    // std::cin >> value;
    // flag = true;
    

    std::thread x(Inputs);
    //send a signal
    cv.notify_one();

    if(x.joinable()){
        x.join();
        if(t.joinable()){
            t.join();
        }
    }
        
    return 0;
}