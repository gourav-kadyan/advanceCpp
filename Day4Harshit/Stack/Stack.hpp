#ifndef STACK_HPP
#define STACK_HPP
#include<iostream>
#include <list>
#include "StackEmptyException.hpp"

template <typename T>
class Stack
{
private:
    std::list<T> m_data {};


public:
    Stack() = default;
    Stack(const Stack&) = delete;
    Stack& operator=(const Stack&) = delete;
    Stack(Stack&&) = default;
    Stack& operator=(Stack&&) = default;

    //push function accept one item "val" of type "T" and return void
    void Push(T val);
    //pop function remove one item and return void
    void Pop();

    T Top();

    size_t Size();

    bool isEmpty();
    ~Stack() = default;
};


#endif // STACK_HPP

template<typename T>
inline void Stack<T>::Pop(){
    if(m_data.empty()){
        throw StackEmptyException("DATA IS EMPTY");
    }
    m_data.pop_back();
}



/*
    dont use int 
    use size_t 

    throw stackemptyexception("data is empty")
    [this calls constructor of custom exception class]
    |
    |
    object of type custom exception
    [stored in catch table]

    [<objname>.what() will return m_msg]

    throw stackemptyexception("data is empty") //statement

    throw <expression> //2 parts of the statement
    throw Constructor call i.e function call

    throw [  m_msg = "Data is empty" ]
          <------No Name------------> (rvalue)

    throw rvalue of type StackEmptyException
    [ catch table ]
*/

template <typename T>
inline void Stack<T>::Push(T val){
    if(m_data.empty()){
            //throw
        throw StackEmptyException("DATA IS EMPTY");
    }
    m_data.push_back(val);
}

template <typename T>
inline T Stack<T>::Top()
{
    if(m_data.empty()){
            //throw stack empty!!!
        throw StackEmptyException("DATA IS EMPTY");
    }
    return m_data.back();
}

template <typename T>
inline size_t Stack<T>::Size(){
    return m_data.size();
}

template <typename T>
inline bool Stack<T>::isEmpty(){
    return m_data.empty();
}



