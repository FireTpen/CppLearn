
#include "Point.h"
#include "circle.h"

using namespace std;


void Circle::set_R(int r)
{
    m_R = r;
}
//获取圆的半径
int Circle::get_R()
{
    return m_R;
}
//设置圆心坐标
void Circle::set_Center(int x,int y)
{
    m_Center.set_X_Y(x,y);
}
//获取圆心
Point Circle::get_Center()
{
    return m_Center;
}
