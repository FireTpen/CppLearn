#include "Point.h"


void Point::set_X_Y(int x,int y)
{
    m_X = x;
    m_Y = y;
}
//获取x坐标
int Point::get_X()
{
    return m_X;
}
//获取y坐标
int Point::get_Y()
{
    return m_Y;
}
