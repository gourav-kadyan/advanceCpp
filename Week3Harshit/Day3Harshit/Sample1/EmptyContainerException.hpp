#ifndef EmptyContainerException_HPP
#define EmptyContainerException_HPP

#include <future>
#include <cstring>

class EmptyContainerException : public std::future_error
{
private:
    /* data */
    char* m_msg; //cannot use const here coz we are using strcpy and also if we do then data cannot be change
    // std::future_errc m_error_type;
public:
    EmptyContainerException(std::future_errc error_type,const char* msg):std::future_error{error_type}
     {
        m_msg = new char[strlen(msg) + 1];
        strcpy(m_msg,msg);
        // m_error_type = error_type;
    }

    EmptyContainerException() = delete;
    EmptyContainerException(const EmptyContainerException&) = delete;
    EmptyContainerException(EmptyContainerException&&) = default;
    EmptyContainerException& operator=(const EmptyContainerException&) = delete;
    EmptyContainerException&& operator=(EmptyContainerException&&) = delete;
    

    ~EmptyContainerException() {
        delete []m_msg;
    }


    virtual const char* what() const noexcept override{
        return m_msg;
    }
};

#endif // EmptyContainerException_HPP