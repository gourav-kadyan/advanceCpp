#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP

#include <vector>
#include "Car.hpp"

/*
    college student -> createobjects takes on vector of car pointers
                        to store objects of child type
    
    tcs level -> CreateObjects accepts one container of type vector in which we have Car pointer in which 
                we will do upcasting to store objects of child type

    professional level -> CreateObject is a top level(global) function which takes one argument of type standard 
                        vector to Car pointer BY REFERENCE. This fuction returns void
*/


//void CreateObjects(std::vector<Car*> data);//unnessory data of copy is not good and increase prob of logical error
void CreateObjects(std::vector<Car*>& data);//try to avoid copy as much as possible

void DeleteObjects(std::vector<Car*>&data);

#endif // FUNCTIONALITIES_HPP
