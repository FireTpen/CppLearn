#include <iostream>
#include <string>
using namespace std;

/*
    #函数调用运算符重载
    ·函数调用运算符()也可以重载
    ·由于重载后使用的方式非常像函数的调用，因此称为仿函数
    ·仿函数没有固定写法，非常灵活
*/
class Myprint
{
public:
    void operator()(string text)
    {
        cout << text << endl;
    }

};

class MyAdd
{
public:
    int operator()(int a,int b)
    {
        return a+b;
    }

};


void test1()
{
    Myprint myprint;
    myprint("hello world!");
}

void test2()
{
    MyAdd ma;
    int ret = ma(10,20);
    //匿名函数调用      类名()(参数)  -->这种格式就是匿名函数调用， 当你不想创建对象时，又想直接使用类中的函数时，就可以用匿名函数调用的方法
    cout << "ret = " << ret << endl;
    cout << MyAdd()(10,30) << endl;

}

int main()
{
    test1();
    test2();
    return 0;
}