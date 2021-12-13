#include <iostream>
using namespace std;
/*
1.如果函数模板和普通函数都可以实现，优先调用普通函数  (重载)
2.可以通过空模板参数列表来强制调用函数模板
3.函数模板也可以发生重载
4.如果函数模板可以产生更好的匹配，优先调用函数模板

*/

//普通函数
void fun(int a,int b)
{ 
    cout << "调用普通函数" << endl;
}
//函数模板
template <class T>
void fun(T a,T b)
{
    cout << "调用函数模板"<< endl;
}
//3.函数模板重载
template <class T>
void fun(T a,T b,T c)
{
    cout << "调用函数模板重载" << endl;
}



void test()
{
    int a = 10;
    int b = 20;
    int c = 30;
    char d = 'd';
    char e = 'e';
    //1.如果函数模板和普通函数都可以实现，优先调用普通函数
    fun(a,b);

    //2.可以通过空模板参数列表来强制调用函数模板
    fun<>(a,b);

    //3.函数模板也可以发生重载
    fun(a,b,c);

    //4.如果函数模板可以产生更好的匹配，优先调用函数模板
    fun(d,e);
}


int main()
{
    test();
    return 0;
}