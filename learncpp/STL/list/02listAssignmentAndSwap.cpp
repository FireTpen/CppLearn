#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &l)
{
    for(list<int>::const_iterator it = l.begin();it != l.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test()
{
    //1.创建list容器
    list<int> l1;
    for(int i = 1;i <= 5;i++)
    {
        l1.push_back(i);
    }
    printList(l1);

    //2.assign区间赋值
    list<int> l2;
    l2.assign(l1.begin(),l1.end());
    printList(l2);

    //3.assign n个elem赋值
    list<int> l3;
    l3.assign(7,7);
    printList(l3);

    //4.=号赋值
    list<int> l4 = l3;
    printList(l4);

    //5.swap交换元素
    l3.swap(l1);
    cout << "l3:";
    printList(l3);
    cout << "l1:";
    printList(l1);
}

int main()
{
    test();
    return 0;
}
