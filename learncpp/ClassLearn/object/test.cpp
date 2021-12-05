#include <iostream>

using namespace std;

void fun(int a)
{
    cout << "形参地址：" << &a << endl;
}


int main()
{
    int a =10;
    cout << "实参地址:" << &a << endl;
    fun(a);

    return 0;
}