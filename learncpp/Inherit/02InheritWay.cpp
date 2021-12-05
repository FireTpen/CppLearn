#include <iostream>

using namespace std;

/*
继承方式一共有三种:
·public公共继承--父类继承到子类的public和protected不变,子类不可以访问父类的private
·protect保护继承--父类继承到子类的public和protected都变为protected,子类不可以访问父类的private
·private私有继承--父类继承到子类的public和protected都变为private,子类不可以访问父类的private

无论那种继承方式，父类继承到子类， 父类中的私有属性在子类中都是不可以访问的

*/

class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;

};

class son1 : public Base1
{
    void fun()
    {
        m_A = 10;   //m_A依然是公共属性
        m_B = 10;   //m_B依然是保护属性
        //m_C = 10; m_C无法访问，因为是父类的私有属性
    }

};

class son2 : protected Base1
{
    void fun()
    {
        m_A = 10;   //m_A变为是保护属性
        m_B = 10;   //m_B依然是保护属性
        //m_C = 10; m_C无法访问，因为是父类的私有属性
    }

};

class son3 : private Base1
{
    void fun()
    {
        m_A = 10;   //m_A变为子类的私有属性
        m_B = 10;   //m_B变为子类的私有属性
        //m_C = 10; m_C无法访问，因为是父类的私有属性
    }

};

class Grandson1 : public son3
{
    void fun()
    {
        //三个属性都无法访问，因为都为父类的私有属性
        //m_A = 10;   
        //m_B = 10;  
        //m_C = 10; 
    }

};

int main()
{


    return 0;
}