#include<iostream>
#include<functional>
int val = 10;
class action
{
private:
    /* data */

    int count {0};
public:
    action(/* args */) {}
    void op(){
        auto fn = [obj=*this]()mutable{
            obj.count++;
            std::cout << obj.count << '\n';
        };
    }
    ~action() {}
};

int main(int argc, char const *argv[])
{
    static int x= 10;
    auto fn = [=]() {
        val++;
        x++;
        std::cout << ++val << x <<'\n';
    };

    
    fn();
    std::cout << val << x << std::endl;
    return 0;
}
