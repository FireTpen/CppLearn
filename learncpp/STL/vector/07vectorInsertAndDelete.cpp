#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test()
{
    vector<int> v1;
    for(int i = 0;i < 5;i++)
    {
        //1.插入元素
        v1.push_back(i);
    }
    printVector(v1);
    //2.删除最后一个元素
    v1.pop_back();
    printVector(v1);

    //3.向指定位置插入元素
    v1.insert(v1.begin(),7);
    printVector(v1);
    //4.向指定位置插入n个元素
    v1.insert(v1.begin(),5,8);
    printVector(v1);
    //5.删除指定元素
    v1.erase(v1.begin());
    //6.删除指定位置到末尾的元素
    v1.erase(v1.begin(),v1.end());
    printVector(v1);
    //7.清空容器中所有元素
    v1.clear();
    printVector(v1);

}

int main()
{
    test();
    return 0;
}