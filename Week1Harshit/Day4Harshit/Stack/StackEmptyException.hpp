#ifndef STACKEMPTYEXCEPTION_HPP
#define STACKEMPTYEXCEPTION_HPP
#include<stdexcept>
#include<cstring>

class StackEmptyException : public std::exception 
{
private:
    /* data */
    char* m_msg;
public:
    explicit StackEmptyException(const char* msg) {
        m_msg = new char[strlen(msg) + 1];
        strcpy(m_msg,msg);
    }
    ~StackEmptyException() {
        delete m_msg;
    }

    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override{
        return m_msg;
    }
    StackEmptyException() = delete;
    StackEmptyException(const StackEmptyException&) = delete;
    StackEmptyException(StackEmptyException&&) = delete;
    StackEmptyException& operator=(const StackEmptyException&) = delete;
    StackEmptyException& operator=(StackEmptyException&&) = delete;
};

#endif // STACKEMPTYEXCEPTION_HPP
