#include<iostream>
#include<X11/Xlib.h>
#include<X11/Xutil.h>
#include <vector>
#include <bits/stdc++.h>


Display *d = XOpenDisplay(NULL);


int main(int args, char* p[], char **env){
    bool flag = false;
    char nk[32] = {};
    int count = -1;
    while(1){
        // XOpenDisplay(d,nk);
        XQueryKeymap(d,nk);
        for(int i=0;i<32;i++){
            if(nk[i] != '0'){
                count++;
                std::cout << count << std::endl;
            }
        }
        if(count < -6){
            break;
        }

    }
    std::cout << "Key pressed" << std::endl;
   // std::cout << names << std::endl;
    // setenv("name","VAROUG",1);

}