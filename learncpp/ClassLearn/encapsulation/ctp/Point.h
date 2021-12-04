#ifndef POINT_H
#define POINT_H
#pragma once
#include <iostream>
using namespace std;


class Point
{   
    
public:
    //设置X和Y
    void set_X_Y(int x,int y);

    //获取x坐标
    int get_X();

    //获取y坐标
    int get_Y();


private:
    int m_X;
    int m_Y;
};




#endif