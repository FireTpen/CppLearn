#include <iostream>
#include <set>

using namespace std;

void printSet(set<int> &st)
{
    for(set<int>::iterator it = st.begin();it != st.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void test()
{
    //1.默认构造函数
    set<int> st;
    //插入数据
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(2);   //插入重复数据无效
    cout << "st:";
    printSet(st);

    //2.拷贝构造函数
    set<int> st2(st);
    cout << "st2:";
    printSet(st2);

    //3.赋值
    set<int> st3 = st2;
    cout << "st3:";
    printSet(st3);

    //4.size()判断大小
    cout << "st3的大小" << st3.size() << endl;

    //5.empty()判断是否为空
    if(!st3.empty())
    {
        cout << "st3容器不为空"<< endl;
    }
    else
    {
        cout << "st3容器为空" << endl;
    }

    //5.交换两个集合容器
    set<int> st4;
    st4.insert(40);
    st4.insert(50);
    st4.insert(20);
    st4.insert(10);

    st4.swap(st);
    cout << "st:";
    printSet(st);
    cout << "st4:";
    printSet(st4);

    //6.erase(pos) ; erase(beg,end) ; erase(elem);clear();
    st3.clear();
    if(!st3.empty())
    {
        cout << "st3容器不为空"<< endl;
    }
    else
    {
        cout << "st3容器为空" << endl;
    }
    cout << "-----------------------------" << endl;
    set<int>::iterator sit = st.find(50);
    cout << (*sit) << endl;
    int counter = st.count(20);
    cout << counter << endl;

}

int main()
{
    test();
    return 0;
}