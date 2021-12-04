#include <iostream>

using namespace std;


int *fun()     //形参存放在栈区
{
    int b = 20; //函数中的局部变量也存放在栈区，当函数执行结束，内存资源释放，编译器会进行一次保留返回值，在主函数中可以访问一次
    return &b;
}

int main()
{
    int *p = fun();

    cout << *p << endl;
    cout << *p << endl;

    
    return 0;
}