#include <iostream>
#include <deque>

using namespace std;

void printDeque(deque<int> &d)
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
    //尾插
    d1.push_back(1);
    printDeque(d1);
    //头插
    d1.push_front(2);
    d1.push_front(3);
    printDeque(d1);

    //删除最后一个数据
    d1.pop_back();
    printDeque(d1);
    //删除第一个数据
    d1.pop_front();
    printDeque(d1);

    //以下函数指定位置都用迭代器进行操作

    //指定位置插入一个元素，返回新数据的位置
    deque<int>::iterator it = d1.begin();
    it++;
    d1.insert(it,7);
    printDeque(d1);

    //指定位置插入n个元素，无返回值
    d1.insert(it,3,8);
    printDeque(d1);
    
    deque<int> d2;
    d2.insert(d2.begin(),3,9);
    printDeque(d2);
    //在指定位置插入[beg,end]区间数据，无返回值
    d1.insert(it,d2.begin(),d2.end());
    printDeque(d1);

    //删除区间内的数据，返回下一个数据的位置
    //d1.erase(d1.begin(),d1.end());

    //删除指定位置数据，返回下一个数据的位置
    //d1.erase(it);

    d1.clear();
    if(d1.empty())
    {
        cout << "d1为空" << endl;
    }





}

int main()
{
    test();
    return 0;
}