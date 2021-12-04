#include <iostream>

using namespace std;

/*
    初始化列表
    作用: c++提供了初始化列表语法，用来初始化属性

    语法：构造函数():属性1(值1)，属性2(值2)，属性3(值3)...{}

*/

class Person
{
public:


    //1.正常的有参构造构造函数（传统方式初始化）
    // Person(int a,int b,int c)
    // {
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    //2.固定值初始化
    // Person():m_A(10),m_B(20),m_C(30)
    // {
    //     cout << "m_A = " << m_A << endl;
    //     cout << "m_B = " << m_B << endl;
    //     cout << "m_C = " << m_C << endl;
    // }
    //3.传参初始化
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
    {
        cout << "m_A = " << m_A << endl;
        cout << "m_B = " << m_B << endl;
        cout << "m_C = " << m_C << endl;
    }

    int m_A;
    int m_B;
    int m_C;

};

void test()
{
    Person p(30,20,10);
}


int main()
{
    test();

    return 0;
}