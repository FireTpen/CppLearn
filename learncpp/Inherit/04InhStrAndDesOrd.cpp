#include <iostream>

using namespace std;

/*继承中构造和析构顺序*/


class Base
{
public:
    Base()
    {
        cout << "调用Base构造函数" << endl;
    }
    ~Base()
    {
        cout << "调用Base析构函数" << endl;
    }

};

class Son : public Base
{
public:
    Son()
    {
        cout << "调用Son构造函数" << endl;
    }
    ~Son()
    {
        cout << "调用Son析构函数" << endl;
    }
};

void test()
{
    Base f;
    cout << "----------" << endl;
    Son s;
}

int main()
{
    test();

    return 0;
}