#include <iostream>
#include <string>
using namespace std;
//·模板的通用性不是万能的，有些特定的数据类型，需要用具体化方式做特殊实现
//例如数组或者自定义数据类型(类、结构体等)

/*总结:
·利用具体化的模板，可以解决自定义类型的通用化
·学习模板并不是为了写模板，而是在STL能够运用系统提供的模板

*/

class Person
{
public:
    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;
    }


    string m_Name;
    int m_Age;
};

template <class T>
bool MyCompare(T &a, T &b)
{
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//具体化模板
template<> bool MyCompare(Person &p1,Person &p2)
{
    if(p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void test1()
{
    int a = 10;
    int b = 20; 
    if(MyCompare(a,b)) //调用系统已有的数据类型可以识别
    {
        cout << "a == b" << endl;
    }
    else
    {
        cout << "a != b" << endl;
    }
    Person p1("Tom",11);
    Person p2("Tom",11);
    //MyCompare(p1,p2); //调用自定义数据类型就无法识别了，会报错
}

void test2()
{
    Person p1("Tom",11);
    Person p2("Tom",11);
    if(MyCompare(p1,p2))
    {
        cout << "p1 == p2" << endl;
    }
    else
    {
        cout << "p1 != p2" << endl;
    }
}

int main()
{
    test1();
    test2();

    return 0;
}