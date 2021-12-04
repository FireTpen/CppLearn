#include <iostream>
using namespace std;

//加号运算符重载

//注意：运算符重载也可以发生函数重载

//总结1：对于内置的数据类型的表达式的运算符是不可能改变的
//总结2：不要滥用运算符重载

class Person
{
public:
    
    //1.成员函数重载+号
    // Person operator+(Person &p)
    // {
    //     Person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;  
    // }
    int m_A;
    int m_B;
};

//2.全局函数重载+号
Person operator+(Person &p1,Person &p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;  
}



void test()
{
    Person A;
    A.m_A = 10;
    A.m_B = 10;
    Person B;
    B.m_A = 5;
    B.m_B = 6;
    Person C = A + B;  
    //C = A.operator+(B);   //这是成员函数重载的本质
    //C = operator+(A,B);   //这是全局函数重载的本质
    cout << "m_A = " << C.m_A << endl;
    cout << "m_B = " << C.m_B << endl;
}
int main()
{
    test();

    return 0;
}