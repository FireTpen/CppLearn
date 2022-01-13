#include "../include/msys.h"

bool Teacher::operator==(const Teacher &tea)
{
    if(this->m_Account == tea.m_Account && this->m_Name == tea.m_Name)
    {
        return true;
    }
    else
    {
        return false;
    }
}
