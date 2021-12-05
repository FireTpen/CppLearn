#include <iostream>

using namespace std;

/*1.值传递*/
void swap01(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;

}

/*2.地址传递*/
void swap02(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*3.引用传递*/
void swap03(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;

}

int main()
{
    int a = 10;
    int b = 20;

    swap01(a,b);        //传值
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap02(&a,&b);      //传地址
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap03(a,b);        //引用变量
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    return 0;
}