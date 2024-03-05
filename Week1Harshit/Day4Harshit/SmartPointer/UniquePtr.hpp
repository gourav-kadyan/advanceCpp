#ifndef UNIQUEPTR_HPP
#define UNIQUEPTR_HPP

//implementation is 2/10
//Just an example
template <typename T>
class UniquePtr
{
private:
    T* m_ptr;

public:
    UniquePtr(T* ptr): m_ptr{ptr}{
        ptr = nullptr;
    }
    UniquePtr(const T*&) = delete;
    UniquePtr& operator=(const T*&) = delete;

    //move
    UniquePtr(T*&&) = default;
    UniquePtr& operator=(T*&&) = default;

    //manual func to delete pointer
    void Release(){
        delete m_ptr;
        m_ptr = nullptr; //if not do this m_ptr become dangling ptr
    }
    ~UniquePtr(){
        delete m_ptr;
        m_ptr = nullptr;
    }
};


#endif // UNIQUEPTR_HPP
