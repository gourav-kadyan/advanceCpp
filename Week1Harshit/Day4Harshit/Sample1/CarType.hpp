#ifndef CARTYPE_HPP
#define CARTYPE_HPP

/*
    enum --> data are two type --> real value like salary ,age
                               --> categorical data --> like option type like gender, week, months which has fixed count

    for dealing categorical data we use enum to deal it
    so that it can give one out of option and user dont abuse it

    like --> enum Rank {}
            enum Gear {}
            enum Position {} // in any kind of scenario , like all have first , second 

    Problem --> multi enum has same literals --> so due to same it give compiler time error
            --> we cannot force the user to use enum name as a prefix
            like enum Rank r1 = Rank::FIRST // so it cannot give same error

            --> unnessary comparison --> example
                enum Rank r1 = Rank::FIRST;
                enum Gear g1 = Gear::FIRST;
                if(r1 == g1) // this condition need to give error but it give true and also compiler should block
                                the comparison of enums of different types
                                1 - IF all enums in same file then compiler giver error
                                2 - If not then not giving error

            --> like we have func name magic --> void Magic(int number){ cout << number * number << endl;}
                and we have enum Rank r1 = Rank::FIRST;
                BUT if we pass Magic(r1) and it works but this is bad coz its a bad practice coz system is working
                without your logic --> cpp people reason --> they belive the programmer doing something due to some logic

            1 - we have to force the user to enum name as  a prefix
            2 - we have to ban unnesary comparison
            3 - implicit conversion is need to banned 


            THATS WHY WE SHOULD USE ENUM CLASS INSTEAD OF ENUM


*/

enum class CarType{
    SEDAN,
    SUV,
    HATCHBACK
};

#endif // CARTYPE_HPP
