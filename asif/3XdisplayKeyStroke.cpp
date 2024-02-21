#include<iostream>
#include<X11/Xlib.h>
#include<X11/Xutil.h>

Display *d = XOpenDisplay(NULL);

void GetDirDisplay(Display *d){
    
}

int main (){
    char nk[32] = "";
    while(1){
        XQueryKeymap(d,nk);
        for(int i=0;i<32;i++){
            std::cout << (int)nk[i] << " ";
        }
        std::cout << std::endl;
    }
}