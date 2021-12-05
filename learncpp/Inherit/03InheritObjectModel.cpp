#include <iostream>

using namespace std;
/*
    继承中的对象模型:

*/

class Base
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son : public Base
{
public:
    int m_D;

};

void test()
{
    Son d;

    //Son d的大小为16个字节，父类中的三个成员属性也会继承到子类中，父类的私有属性只是杯隐藏了起来
    cout << "size of Son =" << sizeof(d) << endl;

}

int main()
{
    test();

    return 0;
}