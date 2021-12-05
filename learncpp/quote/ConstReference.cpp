#include <iostream>

using namespace std;

void fun(const int &ret,int &ret2)
{
    ret2++;
    cout << "ret = " << ret << endl;
    cout << "ret2 = " << ret2 << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    int &c = a; // int &c = 10;是错误的，引用必须引用一块合法的内存空间

    fun(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}