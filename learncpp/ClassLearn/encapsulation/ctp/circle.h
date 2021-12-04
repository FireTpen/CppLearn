#ifndef POINT_H
#define POINT_H
#pragma once
#include <iostream>
using namespace std;
#include "Point.h"

class Circle
{
public:
    //设置圆的半径
    void set_R(int r);
    //获取圆的半径
    int get_R();

    //设置圆心坐标
    void set_Center(int x,int y);

    //获取圆心
    Point get_Center();


private:
    int m_R;    //半径
    Point m_Center; //圆心
};




#endif