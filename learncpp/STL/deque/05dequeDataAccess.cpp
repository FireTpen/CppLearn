#include <iostream>
#include <deque>

using namespace std;

void printDeque(deque<int> &d)
{
    for(deque<int>::iterator it = d.begin();it != d.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test()
{
    deque<int> d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);
    //1.at(int dex) 索引数据
    cout << d1.at(5) << endl;
    //2.operator[]; 索引数据
    cout << d1[3] << endl;
    
    //3.返回容器中第一个数据元素
    cout << d1.front() << endl;

    //4.返回容器中最后一个数据元素
    cout << d1.back() << endl;

}

int main()
{
    test();

    return 0;
}