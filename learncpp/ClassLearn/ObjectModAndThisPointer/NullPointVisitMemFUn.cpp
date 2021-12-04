#include <iostream>

using namespace std;

/*
    C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针

    如果用到this指针，需要确保代码的健壮性

*/

class Person
{
public:

    void showClassMame()
    {
        cout << "类名:Person" << endl;
    }

    void showPersonAge()
    {
        cout << "age = " << m_Age << endl;
    }

    int m_Age;
};

void test()
{
    Person p2;
    Person *p = &p2;
    p->showClassMame;
}

int main()
{
    test();

    return 0;
}