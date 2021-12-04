#include <iostream>

using namespace std;

void fun(int a,int) //第二个形参是占位参数
{


}

int main()
{

    fun(10,10); //函数调用时，占位参数也要传入对应数据类型的实参，否则程序会报错

    return 0;
}