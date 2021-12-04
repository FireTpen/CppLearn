#include <iostream>
#include <string>
using namespace std;

//成员函数做友元
class Building;

class Goodgay
{
public:
    Goodgay();

    void visit();   //可以访问私有属性
    void visit2();  //不可以访问私有属性

    Building *building;
};

class Building
{   
friend void Goodgay::visit();

public:
    Building();

public:  
    string m_SittingRoom;
private:
    string m_BedRoom;
};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}


Goodgay::Goodgay()
{
    building = new Building;
}

void Goodgay::visit()
{
    cout << "好基友正在访问:" << building->m_SittingRoom << endl;
    cout << "好基友正在访问:" << building->m_BedRoom << endl;
}
void Goodgay::visit2()
{
    cout << "好基友2正在访问:" << building->m_SittingRoom << endl;
    //cout << "好基友正在访问:" << building->m_BedRoom << endl;    没有声明为友元，无法访问私有成员
}

void test()
{
    Goodgay gg;
    gg.visit();
    gg.visit2();
}

int main()
{
    test();

    return 0;
}