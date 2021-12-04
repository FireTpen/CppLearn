#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    //int &c;是错误引用，使用引用的时候必须要初始化
    int &c = a; //一旦初始化引用之后，无法更改

    c = b;  //只是赋值操作，并不是更改引用

    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    cout << "c = "<< c << endl;



    return 0;
}