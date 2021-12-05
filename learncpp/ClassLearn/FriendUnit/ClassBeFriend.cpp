#include <iostream>
#include <string>

using namespace std;

/*类做友元*/

class Building
{
friend class goodGay;   //以这种格式把类声明， goodgay也能访问Building中的私有成员

public:
    Building();
    string m_SittingRoom;

private:
    string m_Bedroom;

};

class goodGay
{
public:
    goodGay(Building &building);

};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_Bedroom = "卧室";
}

goodGay::goodGay(Building &building)
{
    cout << "好基友正在访问:" << building.m_SittingRoom << endl;
    cout << "好基友正在访问:" << building.m_Bedroom << endl;
}

void test()
{
    Building b;
    goodGay gy(b);
}


int main()
{
    test();

    return 0;
}