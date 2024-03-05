#ifndef IdNotFoundException_HPP
#define IdNotFoundException_HPP

#include <stdexcept>
#include <cstring>

class IdNotFoundException : public std::exception
{
private:
    /* data */
    char* m_msg; //cannot use const here coz we are using strcpy and also if we do then data cannot be change
public:
    IdNotFoundException(const char* msg) {
        m_msg = new char[strlen(msg) + 1];
        strcpy(m_msg,msg);
    }

    IdNotFoundException() = delete;
    IdNotFoundException(const IdNotFoundException&) = delete;
    IdNotFoundException(IdNotFoundException&&) = default;
    IdNotFoundException& operator=(const IdNotFoundException&) = delete;
    IdNotFoundException&& operator=(IdNotFoundException&&) = delete;
    

    ~IdNotFoundException() {
        delete []m_msg;
    }


    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override{
        return m_msg;
    }
};

#endif // IdNotFoundException_HPP
