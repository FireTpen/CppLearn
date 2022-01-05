#include <iostream>
#include <set>
#include <string>
using namespace std;

//仿函数(自定义排序方式)
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};

void printSet(set<int> &st)
{
    for(set<int>::iterator it = st.begin();it != st.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void printSet2(set<int,MyCompare> &st)
{
    for(set<int,MyCompare>::iterator it = st.begin();it != st.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

//存放内置数据类型测试
void test()
{
    set<int> st;
    for(int i = 0;i < 10;i++)
    {
        st.insert(i);
    }
    cout << "排序前:";
    printSet(st);

    cout << "-----------------------------------" << endl;
    set<int,MyCompare> st2;
    for(int i = 0;i < 10;i++)
    {
        st2.insert(i);
    }
    cout << "排序后:";
    printSet2(st2);
}

class Person
{
public:
    Person(string name,int age,int height)
    {
        this->m_Name = name;
        this->m_Age = age;
        this->m_Height = height;
    }

    string m_Name;
    int m_Age;
    int m_Height;
};

class PersonCompare
{
public:
    bool operator()(const Person &p1,const Person &p2)
    {
        //按照年龄 降序
        if(p1.m_Age == p2.m_Age)
        {
            return (p1.m_Height > p2.m_Height);
        }
        else
        {
            return (p1.m_Age > p2.m_Age);
        }
    }
};

void printPersonSet(set<Person,PersonCompare> &st)
{
    for(set<Person,PersonCompare>::iterator sit = st.begin();sit != st.end();sit++)
    {
        cout << "姓名:" << sit->m_Name << "  年龄：" << sit->m_Age << "  身高:" << sit->m_Height << endl;
    }
}

//存放自定义数据类型
void test02()
{
    //1.创建Person数据类型set容器
    set<Person,PersonCompare> st;

    //2.创建类对象
    Person p1("周淑怡",18,173);
    Person p2("南波儿",21,178);
    Person p3("智勋",18,150);
    Person p4("PDD",32,183);
    Person p5("UZI",21,168);
    Person p6("卢本伟",30,173);

    //3.插入数据
    st.insert(p1);
    st.insert(p2);
    st.insert(p3);
    st.insert(p4);
    st.insert(p5);
    st.insert(p6);

    //4.打印
    printPersonSet(st);
}

int main()
{
    test();
    test02();
    return 0;
}