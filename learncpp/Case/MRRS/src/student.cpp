#include "../include/msys.h"

//重载等号
bool Student::operator==(const Student &stu)
{
    if(this->m_Account == stu.m_Account && this->m_Name == stu.m_Name)
    {
        return true;
    }
    else
    {
        return false;
    }
}

