#include <iostream>
using namespace std;

class Sample {
public:
    void print(int &num)
    {
        cout << "#->" << num;
    }

    void print(int num) const
    {
        cout << "$->" << num;
    }
};



int main()
{
    const Sample S;
    int a;
    S.print(4);


    return 0;
}
