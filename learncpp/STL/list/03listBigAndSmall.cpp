#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &l)
{
    for(list<int>::const_iterator it = l.begin();it != l.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void test()
{
    list<int> l1;
    for(int i = 0;i < 5;i++)
    {
        l1.push_back(i);
    }
    printList(l1);
    //1.size()查看容器大小
    cout << "l1大小：" << l1.size() << endl;
    
    for(int i = 0;i < 5;i++)
    {
        l1.pop_back();
    }
    //2.empty() 判断容器是否为空
    if(l1.empty())
    {
        cout << "l1为空" << endl;
    }

    //3.resize(num) 重新指定容器长度为num
    l1.resize(10);
    cout << "l1大小：" << l1.size() << endl;

    //4.resize(num,elem);   重新指定容器长度为num，若容器变长用elem来填补
    l1.resize(5,5);
    cout << "l1大小：" << l1.size() << endl;
    printList(l1);

}

int main()
{
    test();
    return 0;
}