#include <iostream>
#include <functional>

using namespace std;

/*除了negate为一元仿函数，其余都为二元仿函数*/

void test01()
{
    //1.加法仿函数
    plus<int>p;
    cout << "加法:" << p(10,20) << endl;

    //2.减法仿函数
    minus<int>m;
    cout << "减法:" << m(20,10) << endl;

    //3.乘法仿函数
    multiplies<int>mp;
    cout << "乘法:" << mp(10,20) << endl;

    //4.除法仿函数
    divides<int>d;
    cout << "除法:" << d(20,10) << endl;

    //5.取模仿函数
    modulus<int>md;
    cout << "取模:" << md(20,3) << endl;

    //6.取反仿函数
    negate<int>n;
    cout << "取反:" << n(20) << endl;

}



int main()
{
    test01();
    return 0;
}