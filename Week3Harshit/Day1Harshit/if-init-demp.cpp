#include<iostream>
#include<vector>

//trash code
std::vector<int> FindOddNumber(std::vector<int>& data) noexcept {
    
    std::vector<int> result;

    for(int val :data){
        if(val % 2 != 0){
            result.push_back(val);
        }
    }

    return result;
}

int main(){

    std::vector<int> data {1,1,3,2,4,5};
    //the function may return empty container
    std::vector<int> result = FindOddNumber(data);

    if(result.empty()){
        std::cout << "Mein he pagal hu\n";
    }
    else{
        for(int val : result){
            std::cout << val << '\n';
        }
    }

    //if-initializer syntax --> need min. cpp 17
    if(std::vector<int> result = FindOddNumber(data); !result.empty()){
        std::cout << "Still bad, but a new to delete data as early as possible\n";
        for(int val : result){
            std::cout << val << '\n';
        }
    }//result data delete/free here


    return 0;
}