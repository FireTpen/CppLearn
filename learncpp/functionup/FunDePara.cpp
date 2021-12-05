#include <iostream>

using namespace std;


void fun01(int a,int b) //正常函数定义形参的参数等待实参传入
{

    return a+b;
}

void fun02(int a,int b = 10,int c =20)  //函数的形参可以设置默认参数，当实参没有参数传入的时候形参的值为默认参数
{
    return a+b+c;                       //注意事项:当形参设置默认参数，从第一个设置默认参数的形参开始，从左往右的形参都得设置默认参数
}   

void fun03(int a = 1,int b = 2,int c = 3); //在函数的声明中如果形参有默认参数,那么函数的实现中形参就不能设置默认参数，否则程序就会报错。

void fun03(int a,int b,int c)
{
    return a+b+c;
}

int main()
{



    return 0;
}