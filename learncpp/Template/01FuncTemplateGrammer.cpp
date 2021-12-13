#include <iostream>
using namespace std;

/*
    ·C++另一种编程思想称为 泛型编程，主要是利用模板技术
    ·C++提供两种模板机制：函数模板和类模板

    函数模板作用:
    建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表
    
    语法：
    template <typename T>
    函数声明或定义

    解释：
    template --- 声明创建模板
    typename --- 表明其后面的符号是一种数据类型，可以用class代替
    T --- 通用的数据类型，名称可以替换通常为答谢字母

    总结：
    ·函数模板利用关键字 template
    ·使用函数模板有两种方式：自动类型推导、显示指定类型
    ·模板的目的是为了提高复用性，讲类型参数化

*/

//整型交换
void swapInt(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//Double型交换
void swapDouble(double &a,double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

//模板
template <typename T>
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test()
{
    int a = 10;
    int b = 20;


    //swapInt(a,b);
    //1.自动推导
    //mySwap(a,b);    //直接调用，让编译器去分辨传入的实参是什么数据类型

    //2.指定类型
    mySwap<int>(a,b);   //在函数名后面加上<数据类型>    格式：函数名<数据类型>(参数);  ,直接指定传入的实参数据类型

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

}

int main()
{
    test();
    return 0;
}