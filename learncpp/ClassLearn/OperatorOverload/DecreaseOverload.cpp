#include <iostream>
using namespace std;


//递减运算符重载
class Myinteger
{
friend ostream &operator<<(ostream &cout,Myinteger Myint);

public:
    Myinteger()
    {
        m_Num = 10;
    }
    //前置递减
    Myinteger &operator--()
    {
        m_Num--;
        return *this;
    }

    //后置递减
    Myinteger operator--(int) //int 代表占位参数，可以用于区分前置和后置
    {
        Myinteger temp = *this;
        m_Num--;
        return temp;
    }

private:
    int m_Num;

};

//重载左移运算符，可以输出Myinteger类型对象
ostream &operator<<(ostream &cout,Myinteger Myint)
{
    cout << Myint.m_Num;
    return cout;
}

void test01()
{
    Myinteger m;
    cout << --m << endl;
    cout << --(--m) << endl;
    cout << m-- << endl;
    cout << m << endl;

}



int main()
{
    test01();

    return 0;
}