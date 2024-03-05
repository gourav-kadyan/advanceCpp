#ifndef IdNotFoundException_HPP
#define IdNotFoundException_HPP

#include <future>
#include <cstring>

class IdNotFoundException : public std::future_error
{
private:
    /* data */
    char* m_msg; //cannot use const here coz we are using strcpy and also if we do then data cannot be change
    // std::future_errc m_error_type;
public:
    IdNotFoundException(std::future_errc error_type,const char* msg):std::future_error{error_type}
     {
        m_msg = new char[strlen(msg) + 1];
        strcpy(m_msg,msg);
        // m_error_type = error_type;
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