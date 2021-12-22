#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void test()
{
    //1.创建一个容器嵌套容器
    vector<vector<int>> v;      //相当于二维数组


    //2.创建一些小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    //3.给小容器插入数据
    for(int i = 0;i < 4;i++)
    {
        v1.push_back(i+1);
        v2.push_back(i+2);
        v3.push_back(i+3);
        v4.push_back(i+4);
    }

    //4.给大容器插入小容器
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    //5.遍历大容器
    for(vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
    {
        for(vector<int>::iterator vit = (*it).begin();vit != (*it).end();vit++)
        {
            cout << (*vit) << " ";
        }
        cout << endl;
    }


}


int main()
{
    test();
    return 0;
}