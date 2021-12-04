#include <iostream>
#include <string>
using namespace std;

/*4.4友元

在程序里，有些私有属性，也想让类外特殊的一些函数或者类进行访问。

友元的目的就是让一个函数或者类访问另一个类中私有成员

友元的关键字为friend

友元的三种实现：
·全局函数做友元
·类做友元
·成员函数做友元

*/

class Building
{
friend void Goodgay(Building &building);

public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

    string m_SittingRoom;
private:

    string m_BedRoom;
};

//定义一个全局函数，想访问类中的私有属性
void Goodgay(Building &building)
{
    cout << "好基友正在访问:" << building.m_SittingRoom << endl;
    cout << "好基友正在访问:" << building.m_BedRoom << endl;
}


int main()
{
    Building myhouse;
    Goodgay(myhouse);

    return 0;
}