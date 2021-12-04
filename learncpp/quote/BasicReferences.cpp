#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &b = a;   //给变量a取一个别名为b

    cout << a << endl;
    cout << b << endl;
    b = 100;
    cout << a << endl;
    cout << b << endl;


    return 0;
}