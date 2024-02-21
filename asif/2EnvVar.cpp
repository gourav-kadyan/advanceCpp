#include<iostream>
#include <stdlib.h>

int main(int args, char *p[], char **env){
    //std::cout << p[0] << std::endl;

    // for(int i=0;;i++){
    //     if(env[i]){
    //         std::cout << env[i] << std::endl;
    //     }
    //     else{
    //         break;
    //     }
    // }

    //using getenv
    std::cout << getenv("gourav") << std::endl;
    //in this third argument if val is pos then it  overwrite if 0 then not\
    //it store in local when program completed setenv var deleted
    setenv("GOURAV","xCHAD",1);
    std::cout << getenv("GOURAV") << std::endl;

    
}