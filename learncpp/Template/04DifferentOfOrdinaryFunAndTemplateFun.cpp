/*
 普通函数与函数模板区别

 1、普通函数调用可以发生隐式类型转换
 2、函数模板 用自动类型推导，不可以发生隐式类型转换
 3、函数模板 用显示指定类型，可以发生隐式类型转换

*/

#include <iostream>
using namespace std;

int fun1(int a,int b)
{
    return a+b;
}


template<class T>
int fun2(T a, T b)
{
    return a+b;
}


void test()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    //1.普通函数调用可以发生隐式类型转换
    fun1(a,c);  //输出结果为 109 char c 隐式转换为 int类型

    //2.函数模板自动类型推导不可以发生隐式类型转换
    //fun2(a,c); 会报错

    //3.函数模板显示指定类型可以发生隐式类型转换
    fun2<int>(a,c);//输出结果为109 ,因为已经指定它的类型为int型


}

int main()
{
    test()

    return 0;
}