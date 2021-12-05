#include<iostream>

using namespace std;

class Point
{   //设置X和Y
public:
    void set_X_Y(int x,int y)
    {
        m_X = x;
        m_Y = y;
    }
    //获取x坐标
    int get_X()
    {
        return m_X;
    }
    //获取y坐标
    int get_Y()
    {
        return m_Y;
    }

private:
    int m_X;
    int m_Y;
};


class Circle
{
public:
    //设置圆的半径
    void set_R(int r)
    {
        m_R = r;
    }
    //获取圆的半径
    int get_R()
    {
        return m_R;
    }
    //设置圆心坐标
    void set_Center(int x,int y)
    {
        m_Center.set_X_Y(x,y);
    }
    //获取圆心
    Point get_Center()
    {
        return m_Center;
    }


private:
    int m_R;    //半径
    Point m_Center; //圆心
};


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