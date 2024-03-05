#ifndef EMPTYCONTAINEREXCEPTION_HPP
#define EMPTYCONTAINEREXCEPTION_HPP

#include <stdexcept>
#include <cstring>

class EmptyContainerException : public std::exception
{
private:
    /* data */
    char* m_msg; //cannot use const here coz we are using strcpy and also if we do then data cannot be change
public:
    EmptyContainerException(const char* msg) {
        m_msg = new char[strlen(msg) + 1];
        strcpy(m_msg,msg);
    }

    EmptyContainerException() = delete;
    EmptyContainerException(const EmptyContainerException&) = delete;
    EmptyContainerException(EmptyContainerException&&) = default;
    EmptyContainerException& operator=(const EmptyContainerException&) = delete;
    EmptyContainerException&& operator=(EmptyContainerException&&) = delete;
    

    ~EmptyContainerException() {
        delete []m_msg;
    }

    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override{
        return m_msg;
    }
};

#endif // EMPTYCONTAINEREXCEPTION_HPP
