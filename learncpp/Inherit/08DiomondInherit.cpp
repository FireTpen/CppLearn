#include <iostream>

using namespace std;
/*
    菱形继承:菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
    利用虚继承可以解决菱形继承问题
*/


class Animals
{
public:
    int m_Age;

};


//利用虚继承，可以解决菱形继承的问题
//继承之前 加上关键字 virtual 变为徐继承
//Animal类就称为 虚基类

//羊类
class Sheep : virtual public Animals
{

};
//驼类
class Tuo : public Animals
{


};
//羊驼类
class SheepTuo : public Sheep,public Tuo
{


};

void test()
{
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;
    //当菱形继承，两个父类拥有相同数据，需要加以作用域区分
    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

    //
}

int main()
{

    return 0;
}