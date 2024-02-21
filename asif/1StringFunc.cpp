#include<iostream>
#include<cstring>

void reversestring(char *arr, int n){
    int low = 0;
    int high = n-1;
    while(low < high){
        char temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void show(char *arr){
    int n = strlen(arr);
    for(int i=0;i<n;i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void findsub(char *text, char *sub){
    //using sliding window
    int n = strlen(text);
    int m = strlen(sub);
    int count = 0;

    for(int i=0;i<n;i++){
        int j = 0;
        if(i+m < n){
            while(j < m){
                if(text[i+j] != sub[j]){
                    break;
                }
                j++;
            }
        }
        if(j == m){
            count++;
        }
    }
    std::cout << "Count of sub string is " << count << std::endl;
}

void replacesub(char *text, char* sub, char* hub){
    
    int n = strlen(text);
    int m = strlen(sub);
    
    for(int i=0;i<n;i++){
        int j = 0;
        if(i+m < n){
            while(j < m){
                if(text[i+j] != sub[j]){
                    break;
                }
                j++;
            }
        }
        if(j == m){
            j = 0;
            while(j < m){
                text[i + j] = hub[j];
                j++;
            }
        }
    }

}


int main(){
    char arr[] = "HELLO";
    int n = strlen(arr);

    //Reverse a string
    reversestring(arr,n);
    show(arr);
    reversestring(arr,n);

    //string concat
    char brr[10] = "Hiii";
    for(int i=0;i<n;i++){
        brr[4+i] = arr[i];
    }
    show(brr);

    //find substr
    char sub[] = "LL";
    findsub(arr,sub);

    //find and replace sub with hub string
    char hub[] = "II";
    replacesub(arr,sub,hub);
    show(arr);

    return 0;
}