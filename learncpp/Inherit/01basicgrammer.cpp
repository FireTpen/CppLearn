#include <iostream>
#include <string>
using namespace std;


/*
总结:
·继承的好处：减少重复代码
·语法: class 子类 : 继承方式 父类{};    
·子类也 称为 派生类
·父类也 称为 基类

·派生类中的成员，包含两大部分：
·一类是从基类继承过来的，一类是自己增加的成员
·从基类继承过来的表现其共性，而新增的成员体现了其个性。
*/

class Person
{
public:
    void ppp()
    {
        cout << "这是一个人类" << endl;
    }


};

class Police : public Person
{
public:
    void enterNum(int num)
    {
        m_Num = num;
        cout << "您的警号为:" << m_Num << endl;
    }
private:
    int m_Num;
};


void test02()
{
    Person human;
    Police police;
    police.ppp();
    police.enterNum(77821);
    

}









//Java页面
// class Java
// {
// public:
//     void header()
//     {
//         cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
        
//     }
//     void left()
//     {
//         cout << "Java、Python、C++、。。。(公共分类列表)" << endl;
//     }
//     void content()
//     {
//         cout << "java学科视频" << endl;
//     }
// };

// void test01()
// {
//     cout << "Java下载视频页面如下: " << endl;
//     Java ja;
//     ja.header();
//     ja.footer();
//     ja.left();
//     ja.content();

// }


int main()
{
    //test01();
    test02();

    return 0;
}