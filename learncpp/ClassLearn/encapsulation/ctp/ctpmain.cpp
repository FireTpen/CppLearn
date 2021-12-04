#include "Point.h"
#include "circle.h"

using namespace std;

void Judge(Circle c,Point p)
{   
    int len = (p.get_X() - c.get_Center().get_X()) * (p.get_X() - c.get_Center().get_X()) + ((p.get_Y() - c.get_Center().get_Y()) * (p.get_Y() - c.get_Center().get_Y()));

    if(len == (c.get_R()*c.get_R()))
    {
        cout << "点在圆上" << endl;
    }
    else if(len > (c.get_R()*c.get_R()))
    {
        cout << "点在圆外" << endl;
    }
    else if(len < (c.get_R()*c.get_R()))
    {
        cout << "点在圆内" << endl;
    }

}

int main()
{
    Circle c1;
    c1.set_R(10);
    c1.set_Center(0,0);
    cout << "圆的半径为:" << c1.get_R() << "  圆的坐标为:" << c1.get_Center().get_X() << "," << c1.get_Center().get_Y() << endl;

    Point p1;
    p1.set_X_Y(0,11);

    Judge(c1,p1);

    return 0;
}