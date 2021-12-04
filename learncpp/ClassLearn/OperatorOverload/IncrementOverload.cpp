#include<iostream>

using namespace std;



class Myinterge
{
friend ostream &operator<<(ostream &cout,Myinterge myint);

public:
    Myinterge()
    {
        m_Num = 0;
    }
    //前置递增
    Myinterge &operator++()
    {
        m_Num++;
        return *this;
    }

    //后置递增
    Myinterge operator++(int)       //int 代表占位参数，可以用于区分前置和后置
    {
        Myinterge temp = *this;
        m_Num++;
        return temp;
    }


private:
    int m_Num;
};

//重载左移运算符<<,使得cout可以输出 Myinterge的对象
ostream &operator<<(ostream &cout,Myinterge myint)
{
    cout << myint.m_Num;
    return cout;
}


void test()
{
    Myinterge m;
    cout << m << endl;
    cout << ++m << endl;
    cout << ++(++m) << endl;

}

void test02()
{
    Myinterge m;
    cout << m++ << endl;
    cout << m << endl;
}


int main()
{
    //test();
    test02();


    return 0;
}