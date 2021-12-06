#include <iostream>
#include <string>
using namespace std;

/*案例一、计算器
分别利用普通写法和多态技术、设计实现两个操作数进行运算的计算器类

多态的优点：
·代码组织结构清晰
·可读性强
·利于前期和后期的扩展以及维护

·如果想扩展新的功能，需求修改源码
·在真正的开发中提倡开闭原则
·开闭原则：对扩展进行开发，对修改进行关闭

*/

//1.普通写法
// class Calculator
// {
// public:
//     int getResult(string oper)
//     {
//         if(oper == "+")
//         {
//             return m_Num1 + m_Num2;
//         }
//         else if(oper == "-")
//         {
//             return m_Num1 - m_Num2;
//         }
//         else if(oper ==  "*")
//         {
//             return m_Num1 * m_Num2;
//         }
//         return 1;
//     }
//     int m_Num1;
//     int m_Num2;
// };

// void test1()
// {
//     Calculator c;
//     c.m_Num1 = 10;
//     c.m_Num2 = 20;
//     cout << c.m_Num1 << "+" << c.m_Num2 << "=" <<c.getResult("+") << endl;

// }

//2.多态写法

//实现计算器抽象类
class AbstractCaculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;

};

//加法
class AddCaculator : public AbstractCaculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }

};

//减法
class SubCaculator : public AbstractCaculator
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }

};

void test2()
{
    //多态使用条件
    //父类指针或者引用指向子类对象

    //加法运算
    AbstractCaculator *abc = new AddCaculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 5;
    cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
    //用完后记得销毁堆区数据
    delete abc;

    //减法运算
    abc = new SubCaculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 5;
    cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
}


int main()
{
    //test1();
    test2();
    return 0;
}