#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

void printvector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};


//reverse算法测试(将容器内元素进行反转)
void test04()
{
    //1.新建vector容器
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }
    cout << "反转前:"; 
    printvector(v);
    cout << "-----------------------------" << endl;
    //2.用reverse反转容器内的元素
    reverse(v.begin(),v.end());
    cout << "反转后:";
    printvector(v);
}

//merge算法测试(合并两个容器的元素，存储到另一个容器中)
void test03()
{
    vector<int>v1;
    vector<int>v2;
    vector<int>vt;

    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i+10);
    }

    cout << "合并前v1:";
    printvector(v1);
    cout << "合并前v2:";
    printvector(v2);
    cout << "-----------------" << endl;
    //合并前还要对vt容器进行一个扩容：大小为v1+v2容器的大小
    vt.resize(v1.size()+v2.size());

    //merge算法进行合并v1,v2
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vt.begin());
    cout << "合并后v1:";
    printvector(v1);
    cout << "合并后v2:";
    printvector(v2);
    cout << "vt:";
    printvector(vt);
    cout << "-----------------" << endl;
}


//random_shuffle算法测试(洗牌)
void test02()
{
    //1.新建vector容器
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }
    cout << "排序前:";
    printvector(v);
    cout << "-----------------------------" << endl;
    //2.用random_shuffle进行洗牌
    random_shuffle(v.begin(),v.end());
    cout << "排序后:";
    printvector(v);
}

//sort算法测试
void test()
{
    //1.新建vector容器
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }
    cout << "排序前:";
    printvector(v);
    cout << "-----------------------------" << endl;
    //2.自定义谓词进行sort倒序
    sort(v.begin(),v.end(),MyCompare());
    cout << "排序后:";
    printvector(v);

}

int main()
{
    //test();
    //test02();
    //test03();
    test04();
    return 0;
}