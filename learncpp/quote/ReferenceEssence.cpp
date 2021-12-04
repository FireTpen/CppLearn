#include <iostream>

using namespace std;

/*引用的本质
    引用的本质是什么呢？
    引用的本质是一个指针


*/

void fun(int &ret)        //
{
    ret = 100; //其中ret是一个引用， 其实ret就是 *ret

}

int main()
{

    int a = 10;
    int &b = a;     //转换为指针时， (int &b = a)  == (int *b = &a)

    b = 200;   // b 等于 *b = 200;
    fun(a); //该函数调用中的实参 a实际上是传的地址

    return 0;
}