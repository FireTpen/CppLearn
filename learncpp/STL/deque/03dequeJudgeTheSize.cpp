#include <iostream>
#include <deque>

using namespace std;

void printdeque(deque<int> d)
{
    for(deque<int>::const_iterator it = d.begin();it != d.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test()
{
    deque<int> d1;
    for(int i = 0;i < 10;i++)
    {
        d1.push_back(i);
    }
    printdeque(d1);
    if(d1.empty())
    {
        cout << "d1容器为空" << endl;
    }
    else
    {
        cout << "d1容器不为空" << endl;
    }

    cout << "d1容器的大小为:" << d1.size() << endl;
    cout << "重新定义d1长度为15:";
    d1.resize(15,7);
    printdeque(d1);
    cout << "重新定义d1长度为5:";
    d1.resize(5);
    printdeque(d1);
}

int main()
{
    test();
    return 0;
}   