#include <iostream>

using namespace std;

int &fun()
{
    static int a = 100; //static修饰变量为静态变量，变量在全局区，内存地址在程序结束时才释放

    return a;   //该函数的返回值为返回一个变量a的引用
}

int main()
{

    cout << fun() << endl;  //fun()就是函数fun（）中的静态变量a

    int a = fun();
    cout << "a = " << a << endl;
    
    return 0;
}