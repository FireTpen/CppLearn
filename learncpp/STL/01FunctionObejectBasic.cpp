#include <iostream>

using namespace std;

//1.函数对象(仿函数)
class MyAdd
{
public:
    int operator()(int v1,int v2)
    {
        return v1 + v2;
    }

};

class MyPrint
{
public:
    MyPrint()
    {
        count = 0;
    }

    void operator()(string str)
    {
        cout << "传入字符串为:" << str << endl;
        this->count++;
    }

    int getCount()
    {
        return this->count;
    }

    int count;
};

//1.函数对象可以像普通函数那样调用，有参数，有返回值
void test01()
{
    //1.创建对象
    MyAdd myAdd;
    int ret = myAdd(1,2);
    cout << "返回值为:" << ret << endl;

}

//2.函数对象可有自己
void test02()
{
    MyPrint mp;
    mp("Hello world!");
    mp("Hello C++");
    mp("Hello C++");
    mp("Hello C++");
    mp("Hello C++");
    cout << "当前打印字符串次数:" << mp.getCount() << endl;
}

int AddSomething(int a,int b)
{
    return a * b;
}

//3.函数对象可以作为参数传递
void test03()
{   
    MyAdd ma;
    int ret = AddSomething(10,ma(2,8));
    cout << "测试结果为:" << ret << endl;

}


int main()
{
    //test01();
    //test02();
    test03();
    return 0;
}
