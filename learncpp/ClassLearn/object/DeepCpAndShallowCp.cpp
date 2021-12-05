#include <iostream>

using namespace std;


/*
    深浅拷贝是面试经典问题，也是常见的一个坑

    浅拷贝：简单的赋值拷贝操作

    深拷贝：在堆区重新申请空间，进行拷贝操作

    总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的重复释放堆区的问题。
*/

class Person
{
public:
    //无参
    Person()
    {
        cout << "调用Person默认构造函数" << endl;
    }
    //有参构造函数
    Person(int age,int height)
    {
        cout << "有参构造函数!" << endl;

        m_age = age;
        m_Height = new int(height);
    }

    Person(const Person &p)
    {
        cout << "拷贝构造函数" << endl;
        //如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
        m_age = p.m_age;
        m_Height = new int(*p.m_Height);
    }

    ~Person()
    {
        if(m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "调用析构函数" << endl;
    }

private:
    int m_age;
    int *m_Height;
};

int main()
{
    Person p1(18,160);
    Person p2(p1);

    return 0;
}