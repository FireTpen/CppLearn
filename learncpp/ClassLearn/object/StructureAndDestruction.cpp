/*
构造函数:   类名(){}
1.构造函数，没有返回值也不写void。
2.函数名称与类名相同。
3.构造函数可以有参数，因此可以发生重载
4.程序在调用对象的时候自动调用构造，无需手动调用，而且只会调用一次。

析构函数:  ~类名(){}
1.析构函数，没有返回值也不写void
2.函数名称和类名相同，前面加上符号：~
3.析构函数不可以有参数，也不可以发生重载
4.程序在对象销毁时自动调用析构函数，无需手动调用，而且只会调用一次。

*/
#include <iostream>

using namespace std;


class Person
{
public:
    //1.构造函数
    Person()
    {
        cout << "调用Person构造函数" << endl;
    }
    //2.析构函数
    ~Person()
    {
        cout << "调用Person析构函数" << endl;
    }
};

void fun()
{
    Person p;       //该类对象在栈区，函数执行完就释放，所以调用时执行构造函数，释放时执行析构函数
}



int main()
{
    fun();  
    Person p1;      //该类对象在栈区，但是等程序释放时才会调用析构函数

    return 0;
}

