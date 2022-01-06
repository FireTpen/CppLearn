#include <iostream>
#include <functional>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name,int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    /*当我们使用find算法来查找自定义数据类型时，我们要重载==号，
    因为系统并不知道我们的Person数据类型时如何相等的，我们要手动重载
    给他一个判定相等的条件
    */

   //重载==号
   bool operator==(const Person &p) //重载自定义数据类型时，要加入const防止传入的数据被更改
   {
       if(p.m_Name == this->m_Name && p.m_Age == this->m_Age)
       {
           return true;
       }
       else
       {
           return false;
       }
   }

    string m_Name;
    int m_Age;
};

void test()
{
    //1.内置数据类型
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator pos = find(v.begin(),v.end(),5);
    cout << "find()第五个数据:" << (*pos) << endl;

    //2.自定义数据类型
    vector<Person> vp;

    Person p1("张三",18);
    Person p2("李四",14);
    Person p3("王五",16);
    Person p4("赵六",20);
    Person p5("高七",21);

    vp.push_back(p1);
    vp.push_back(p2);
    vp.push_back(p3);
    vp.push_back(p4);
    vp.push_back(p5);

    vector<Person>::iterator p_pos = find(vp.begin(),vp.end(),p3);
    cout << "姓名:" << p_pos->m_Name << "  年龄:" << p_pos->m_Age << endl;
}

int main()
{
    test();
    return 0;
}