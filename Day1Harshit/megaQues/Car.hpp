
// #ifndef CAR_H
// #define CAR_H
// #include <iostream>
// class Car{
// private://{} this use as for inclass initialization --> when default constructor is enabled
//     //use camel case for variable and always use pascal metholodies to make file 
//     std::string m_name {""}; // to distinguish to easily understand and avoid confusion
//     int m_acceleration {0};// as you wish use camel or uderscore both are good
//     int m_top_speed {0};
//     float m_ex_showroom_price {0.0f};
// public:
//     //default constructor enabled --> we use default after that ==> modern cpp syntax
//     Car() = default;//constructor enable for compiler
//     //and also if you use delete instead of default then it says the compiler has to be disabled that member function
//     Car(const Car&) = delete;//disabled by compiler
//     Car(Car&&) = delete; //disable move constructor
//     Car& operator=(const Car&) = delete; //disable assignment copy paste from RHS to LHS
//     Car& operator=(Car&&) = delete; // cut paste from RHS to LHS
//     ~Car() = default;//same enable for compiler

//     Car( std::string name, int acceleration, int top_speed, float showroom_price);

//     std::string name() const { return m_name; }

//     void setName(const std::string &name) { m_name = name; }


//     int acceleraton() const { return m_acceleration; }
//     void setAcceleraton(int acceleration) { m_acceleration = acceleration; }


//     int topSpeed() const { return m_top_speed; }
//     void setTopSpeed(int top_speed) { m_top_speed = top_speed; }


//     float exShowroomPrice() const { return m_ex_showroom_price; }
//     void setExShowroomPrice(float ex_showroom_price) { m_ex_showroom_price = ex_showroom_price; }

//     friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

//     virtual float Drive() = 0;

// };

// #endif // CAR_H

#ifndef CAR_H
#define CAR_H


#include <iostream>


class Car
{
private:
   /* data */
   std::string _name{""};
   int _acceleraton {0};
   int _top_speed {0};
   float _ex_showroom_price{0.0f};


public:
   // default constructor enabled
   Car() = default;
   Car(const Car &) = delete; // not needed don't create , delete it
   virtual ~Car() = default;  // default constructor
   // there R 6 special member func , you have to set ,use or not, (enble or disable something)
   Car(Car &&) = delete;                 // disable move constructor,this is new features in cpp
   Car &operator=(const Car &) = delete; // no loophole
   Car &operator=(Car &&) = delete;      // cpp new, delete move assignment operator


   Car(std::string name, int acceleration, int top_speed, float price);
   // setters and getters
   std::string name() const { return _name; }
   void setName(const std::string &name) { _name = name; }


   int acceleraton() const { return _acceleraton; }
   void setAcceleraton(int acceleraton) { _acceleraton = acceleraton; }


   int topSpeed() const { return _top_speed; }
   void setTopSpeed(int top_speed) { _top_speed = top_speed; }


   float exShowroomPrice() const { return _ex_showroom_price; }
   void setExShowroomPrice(float ex_showroom_price) { _ex_showroom_price = ex_showroom_price; }


   friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
   virtual float Drive() = 0;

};


#endif // CAR