#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &L)
{
    for(list<int>::const_iterator it = L.begin();it != L.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void test()
{
    //1.默认构造函数
    list<int> L1;
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(3);
    L1.push_back(4);
    L1.push_back(5);
    printList(L1);

    //2.区间方式构造
    list<int> L2(L1.begin(),L1.end());
    printList(L2);

    //3.n个elem
    list<int> L3(7,7);
    printList(L3);
    //4.拷贝构造
    list<int> L4(L1);
    printList(L4);

}

int main()
{
    test();
    return 0;
}