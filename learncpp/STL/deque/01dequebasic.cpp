#include <iostream>
#include <string>
#include <deque>

using namespace std;

void printDeque(deque<int> &d)
{
    //const_iterator 使得容器中的数据不可以修改
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
    printDeque(d1);

    deque<int> d2;
    for(int i = 0;i < 10;i++)
    {
        d2.push_front(i);
    }
    printDeque(d2);

    deque<int> d3(d1.begin(),d1.end());
    printDeque(d3);
    
    deque<int> d4(10,7);
    printDeque(d4);

    deque<int> d5(d2);
    printDeque(d5);

}

int main()
{

    test();
    return 0;
}