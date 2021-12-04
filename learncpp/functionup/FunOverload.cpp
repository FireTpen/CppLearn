#include <iostream>

using namespace std;

/*函数的重载
1.作用域相同。
2.函数名相同。
3.函数参数类型不同，个数不同或者顺序不同。
*/

void fun()
{
    cout << "调用fun()" << endl;
}

void fun(int a)
{
    cout << "调用fun(int a)" << endl;
}

void fun(int a,double b)
{

}

void fun(double a,int b)
{

}

int main()
{
    //调用重载函数时，函数根据实参来判断是执行哪一个同名函数。

    return 0;
}
