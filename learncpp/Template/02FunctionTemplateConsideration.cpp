#include <iostream>

using namespace std;

/*
    1.自动推导类型模板，参数类型必须一致，不然编译器无法分辨出你究竟想使用哪个类型
    2.模板必须要确定出T的数据类型，才可以使用

*/
template <typename T>   //typename 可以写成 class
void func2(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
} 



template <class T>
void func()
{
    cout << "调用func()" << endl;
}


void test()
{
    func(); //直接调用， 编译器无法识别func()中的T的类型，会报错
    func<int>();    //我们可以给他指定一个类型，这样编译就不会报错了

}


int main()
{
    test();

    return 0;
}