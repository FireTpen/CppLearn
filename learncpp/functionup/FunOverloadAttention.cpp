#include <iostream>

using namespace std;

//1.当引用作为重载条件
void fun01(int &a)  //int &a = 10; 是不合法的，引用必须取一个合法的地址
{
    cout << "调用fun01(int &a)" << endl;
}

void fun01(const int &a)    //const int &a = 10;是合法的，const 修饰10为一个常量
{
    cout << "调用fun01(const int &a)" << endl;
}


//2.当重载使用默认参数时                                 //在实际使用函数重载时，尽量避免使用默认参数.
void fun02(int a,int b = 10)
{
    cout << "调用fun02(int a,int b = 10)" << endl;

}

void fun02(int a)
{
    cout << "调用fun02(int a)" << endl;
}


int main()
{
    int a = 10;

    //1.当引用作为重载条件
    fun01(a);   //调用的是 fun01(int &a)，
    fun01(10);  //调用的是  void fun01(const int &a)

    //2.当重载使用默认参数时
    fun02(10); //当实参传入一个常量10时，fun02函数重载出现了二义性，无法判断应该选择哪一个函数执行
                //因为传入void fun02(int a,int b = 10)中合法，传入void fun02(int a)中也合法.
    

    return 0;
}