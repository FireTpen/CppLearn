#include <iostream>

using namespace std;
//struct 和 class 之间的区别:默认权限的区别

/*
    struct的默认权限是公共权限
    class的默认权限是私有权限
*/

struct A
{
    int m_name;

};

class B
{

    int m_name;
};

int main()
{
    A n1;
    n1.m_name = "王波";

    B n2;
    n2.//访问不到m_name;

    return 0;
}