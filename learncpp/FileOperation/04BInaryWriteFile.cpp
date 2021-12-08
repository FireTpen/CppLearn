#include <iostream>
#include <string>
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
    ifstream ifs;
    ifs.open("test1.txt",ios::in|ios::binary);
    //2.判断是否打开成功
    if(!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    else
    {
        cout << "文件打开成功" << endl;
    }

    //3.读数据
    Person p;
    ifs.read((char*)&p,sizeof(p));

    cout << "姓名:" << p.name << "  年龄:" << p.age << endl;

    //4.关闭文件

    ifs.close();


}


int main()
{
    test();

    return 0;
}