#include <iostream>
#include <fstream>

using namespace std;

class Person
{
public:
    char name[64];
    int age;

};

void test()
{
    //1.打开文件
    ofstream ofs;
    ofs.open("test1.txt",ios::out | ios :: binary);

    Person p = {"张三",18};

    //2.写入数据
    ofs.write((const char *)&p,sizeof(p));

    //3.关闭文件
    ofs.close();

}

int main()
{
    test();

    return 0;
}