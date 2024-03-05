/*

    Threads

        1- std::thread --> they can be used for parallel/concurrent tasks. They need to be joined or detached.
                            They do not  catch the return values

        2- std::condition_variable : In situation where one thread has to wait for an event to happen because of 
                                        some other thread before completing his own activity Due to other operation
                                        , such threads may do some work before the event, hence are launched 
                                        simultaneously

        3- Container of std::threads : to manage multiple instances std::thread efficiently, (map to functions, join, 
                                        etc)

        4- std::mutex vs std::lock_guard vs std::unique_lock

            - std::mutex can be locked and unlocked manually ONLY! --> dont use it as far as possible
            - std::lock_guard : (Mutex who completed masters) --> scope based / RAII principle following mutex.
                                NO MANUAL LOCK/UNLOCK
            - std::unique_lock : scope-based as well as manual lock/unlock.

        
*/

/*
    Scenario ; 

        - Mercedes : Navigation / Music

        --- unlock the doors --> start the accessories / electronics --> 



                                                    even before the input : destination
                                --> Map --> [load surrounding/favorites/emergency alerts] --> [input : Destination]
        ---> start the software 
                                --> Music


        
        ===> Situation --> I want to launch that performs task A and task B.
                           task A doesnot depend on input parameter. but task B needs an input
                           WE NEED TO LAUNCH THREAD THAT WANTS A PARAMETER EVEN WITHOUT THE Parameter


        //std::future and std::async and std::promise
*/