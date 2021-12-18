#include <iostream>
#include <string>

using namespace std;

/*
当类模板碰到继承时，需要注意一下几点：
·当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中的T的类型
·如果不指定，编译器无法给予子类分配内存
·如果想灵活指定出父类中T的类型，子类也需变为类模板

总结:如果父类是类模板，子类需要指定出父类中T的数据类型

*/

template<class T>
class Base
{
    T m;
};

//class Son : public Base //错误，必须要知道父类中的T类型，才能继承给子类
class Son : public Base<int>    //正确，必须要指定父类中要继承T的类型，编译器才可给予子类分配内存
{

};


//如果想灵活指定出父类中T的类型，子类也需变为类模板

template<class T1,class T2>
class Son2 : public Base<T2>
{

    T1 obj; 
};
int main()
{


    return 0;
}