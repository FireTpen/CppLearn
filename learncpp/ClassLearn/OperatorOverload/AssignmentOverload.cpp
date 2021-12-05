#include <iostream>

using namespace std;

/*
    赋值运算符重载
*/

class Person
{
public:
    //构造函数，在堆区开辟一块内存来存放年龄
    Person(int age)
    {
        m_Age =new int(age);
    }
    
    //析构函数，释放堆区
    ~Person()
    {
       if(m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        } 
    }
    //赋值运算符重载
    Person &operator=(Person &p)
    {
        //1.拷贝时，先判断该对象的堆区是否为空，若不为空，则先释放堆区，再深拷贝
        if(m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        //2.重新申请堆 区进行拷贝
        m_Age = new int(*p.m_Age);

        return *this;
    }

    int *m_Age;

};



void test()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);

    p3 = p2;
    cout << "p1 = " << *p1.m_Age << endl;
    cout << "p2 = " << *p2.m_Age << endl;
    cout << "p3 = " << *p3.m_Age << endl;
}

int main()
{
    test();

    return 0;
}