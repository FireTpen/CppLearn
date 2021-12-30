#include <iostream>
#include <deque>
#include <algorithm>
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
    d1.push_back(3);
    d1.push_back(1);
    d1.push_back(5);
    d1.push_back(2);
    d1.push_back(4);
    //sort容器区间内的元素进行排序，需要头文件algorithm
    sort(d1.begin(),d1.end());
    printDeque(d1);
}

int main()
{
    test();

    return 0;
}