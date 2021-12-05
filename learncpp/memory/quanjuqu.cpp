#include <iostream>
#include <string>

using namespace std;

// 全局变量 存放在全局区

int g_a = 10;
const g_b = 20;


int main()
{
    //局部变量  //这两个变量存放在同一个区
    int a = 10; 
    const int b = 20;

    cout << "局部变量a的地址：" << &a << endl;
    cout << "const修饰的局部变量b（为常量）的地址为:" << &b << endl;

    //字符变量的地址也存放在全局区
    cout << "字符串的地址为:" << &"字符串" <<endl;

    static int c = 30;  //静态变量也存放在全局区 

    return 0;
}