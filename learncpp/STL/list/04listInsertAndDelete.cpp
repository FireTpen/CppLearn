#include <iostream>
#include <list>

using namespace std;

void test()
{
    list<int> l1;
    //1.在容器尾部加入一个元素
    l1.push_back(100);

    //2.删除容器最后一个元素
    l1.pop_back();

    //3.在容器头部插入一个元素
    l1.push_front(1);

    //4.删除容器第一个元素
    l1.pop_front();

    //5.insert(pos,elem) 在pos位置插入elem元素的拷贝，返回新数据的位置
    l1.insert(l1.begin(),4);

    //6.insert(pos,n,elem) 在pos位置插入n个elem元素的拷贝，无返回值
    l1.insert(l1.begin(),5,9);

    //7.insert(pos,begin,end);  在pos位置插入一个区间的数据，无返回值
    list<int> l2;
    for(int i = 0;i < 5;i++)
    {
        l2.push_back(i);
    }
    l2.insert(l2.begin(),l1.begin(),l1.end());

    //8.clear() 清空所有数据
    l1.clear();

    //9.erase(pos) 删除指定位置数据
    l2.erase(l2.begin());

    //10.erase(begin,end) //删除区间数
    l2.erase(l2.begin(),l2.end());

    //11.remove(elem); 删除容器中所有与elem值匹配的元素
    l1.remove(1);
    
}

int main()
{
    test();
    return 0;
}