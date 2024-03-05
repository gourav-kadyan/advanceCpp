/*

    represent "state" of "something"!

*/

class TrainingBatch
{
private:
    /* data */
    /*
        m_id : ID
        m_duration : int (hours)
        m_student : unsigned int
        m_trainer_name : Employee
        m_pmt_coordinator : Employee
        m_date : DateTime
        m_talents : Container<Talent>
    */
public:
    TrainingBatch(/* args */) {}
    ~TrainingBatch() {}
};

class TrainingSession
{
private:
    /* data */
    /*
        m_duration : float (hours)
        m_student_count : unsigned int
        m_trainer_name : string
        m_session_topic : string
    */
public:
    TrainingSession(/* args */) {}
    ~TrainingSession() {}
};//represent state 


/*

Pointer ka state representation
    --> Smart Pointers

Reference ka state representation
    --> reference_wrapper

Thread (set of instruction):
    --> std::async

semaphore ka state : 
    --> lock_guard
    --> unique_lock

union ka state represent : 
    --> std::variant

*/

/*
    If you dont know anything then don't write in code 
*/


/*
    ACCOUNT -> DEBIT()  , CREDIT()
    cOMMAND INTERFACE -> {}   
*/