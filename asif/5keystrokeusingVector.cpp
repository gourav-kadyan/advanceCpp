#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> v;
    while(1){
        char c;
        cin >> c;
        v.push_back(c);
        if(v.size() >= 6 && v[v.size()-1] == 'v' && v[v.size()-2] == 'a' && v[v.size()-3] == 'r' && v[v.size()-4] == 'u' && v[v.size()-5] == 'o' && v[v.size()-6] == 'g'){
            cout << "Naam Mill gya" << endl;
            break;
        }
    }
    return 0;
}