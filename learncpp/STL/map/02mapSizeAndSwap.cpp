#include <iostream>
#include <map>

using namespace std;

void printMap(map<int,int> &m)
{
    for(map<int,int>::const_iterator mit = m.begin();mit != m.end();mit++)
    {
        cout << "编号:" << mit->first << " 数值:" << mit->second << endl;
    }
}

void test()
{
    //1.直接插入
    map<int,int> m;
    m.insert(pair<int,int>(1,20));

    //2.定义一个对组p插入
    pair<int,int> p = make_pair(2,30);
    m.insert(p);

    //3.直接用make_pair插入
    m.insert(make_pair(3,40));
    
    //4.第四种
    m.insert(map<int,int>::value_type(4,50));

    //5.第五种(不建议用于插入，建议用于访问value)
    m[5] = 40;
    printMap(m);
    cout << "-----------------------" << endl;

    //6.查看map容器大小
    cout << "map容器当前大小：" << m.size() << endl;

    //7.清空和删除
    m.erase(m.begin());
    printMap(m);
    cout << "-----------------------" << endl;
    m.erase(3); //删除指定key的元素
    printMap(m);
    cout << "-----------------------" << endl;
    m.erase(m.begin(),m.end());//等同于m.clear();
    printMap(m);



}


int main()
{
    test();
    return 0;
}