#include<iostream>
#include<array>
#include<unordered_map>

//it only works on sequential and fixed size like array , touple, pair etc

/*
    if i have unordered_map<int,std::string
*/

int main(){
    std::array<int, 2> data {101,9000};
    auto [empId, empSalary] = data;

    std::unordered_map<int,std::string> mp {
        std::make_pair<int,std::string>(101,"gourav"),
        std::make_pair<int, std::string>(102, "Ayush")
    };

    for(auto &[k,v] : mp){
        std::cout << "Key is : " << k << " and Value is : " << v << "\n";
    }

}