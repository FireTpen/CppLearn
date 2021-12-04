#include <iostream>

using namespace std;


int *fun()
{
    int *p = new int(10);   //用new关键字可以在堆区开辟一块内存来存放数据，指针p指向该堆区内存地址
                            //程序员创建出来的堆区内存必须要手动释放，如果不手动释放，内存资源将会在程序结束时自动释放

    
    return p;   //返回指针p的地址可以使主函数中可以通过地址访问在函数中用new开辟出来的内存中的数据
}


int main()
{
    int *p = fun();

    cout << *p << endl;
    delete p; //通过delete关键字可以释放new关键字开辟出来的内存空间

    int *arr = new int[10]; //new关键字开辟数组

    delete[] arr; //释放new开辟出来的数组时，delete后面要加上[],不然delete只会释放数组中的第一个元素，导致释放失败.

    return 0;
} 
