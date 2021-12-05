#include <iostream>
#include <string>

using namespace std;

/*
    类对象作为类的成员
*/


class Phone
{
public:

    Phone(string pName):m_pName(pName)
    {
        cout << "调用Phone构造函数" << endl;
    }

    ~Phone()
    {
        cout << "调用Phone析构函数" << endl;
    }
    string m_pName;
};



class Person
{
public:

    Person(string Name,string pName):m_Name(Name),m_pName(pName)      //这里的string pName 字符串直接赋值给m_pName(pName) 为构造函数的一个隐式转换
    {
        cout << "调用Person构造函数" << endl;
    }

    ~Person()
    {
        cout << "调用Person析构函数" << endl;
    }

    string m_Name;
    Phone m_pName;
};

int main()
{
    Person p("张三","苹果X");
    cout << p.m_Name << "拿着一台" << p.m_pName.m_pName << "手机，肥肠帅气" << endl;
    /*
    运行结果如下:
    调用Phone构造函数
    调用Person构造函数
    张三拿着一台苹果X手机，肥肠帅气
    调用Person析构函数
    调用Phone析构函数

    总结:Person类中包含Phone类，创建Person对象时，先创建Phone类对象，再创建Person对象；
        对象释放时，遵循后入先出的规律， 析构时，Person对象先析构，再析构Phone类对象。

        简单来说：先有手机，人才会去买手机；当人要离开商场了，手机才被带离商场。
    */


    return 0;
}