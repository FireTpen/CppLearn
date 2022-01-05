#include <iostream>
#include <map>
#include <string>
using namespace std;

void printMap(map<int,string> &m)
{
    for(map<int,string>::const_iterator it = m.begin();it != m.end();it++)
    {
        cout << "编号:" << it->first << " 姓名:" << it->second << endl;
    }
}

void test()
{
    //1.默认构造创建map容器
    map<int,string> m;
    m.insert(pair<int,string>(1,"优菈"));
    m.insert(pair<int,string>(2,"阿贝多"));
    m.insert(pair<int,string>(3,"雷电将军"));
    m.insert(pair<int,string>(4,"钟离"));
    printMap(m);
    cout << "--------------------------------" << endl;
    //2.拷贝构造
    map<int,string>m2(m);
    printMap(m2);
    cout << "--------------------------------" << endl;
    //3.赋值
    map<int,string>m3 = m2;
    printMap(m3);

}

int main()
{
    test();
    return 0;
}