#include <iostream>
using namespace std;

//重载左移运算符只能用全局函数，不能用成员函数实现，因为用全局函数才能使得
//cout << xxx cout 在左移运算符的左边



//总结:重载左移运算符配合友元可以实现输出自定义数据类型


class Person
{
friend ostream &operator<<(ostream &cout,Person &p);

public:
    Person(int a,int b)
    {
        m_A = a;
        m_B = b;
    }


private:
    int m_A;
    int m_B;

};

//全局函数实现左移重载
//ostream对象只能有一个

ostream &operator<<(ostream &cout,Person &p)
{
    cout << "  m_A = " << p.m_A << "  m_B = " << p.m_B;
    return cout;
}




void test()
{
    Person p(10,10);
    Person p2(20,20);
    cout << p << "hello world" <<p2 << endl;
}


int main()
{
    test();

    return 0;
}