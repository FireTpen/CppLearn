#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void test()
{
    //1.创建流对象  读取
    ifstream ifs;
    
    //2.打开文件并判断文件是否打开成功
    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    else
    {
        cout << "文件打开成功" << endl;
    }
    

    //3.读取数据
    //方式1
    // char buf[1024] = {0};
    // while (ifs >> buf)
    // {
    //     cout << buf << endl;
    // }

    //方式2
    // char buf[1024] = {0};
    // while (ifs.getline(buf, sizeof(buf)))
    // {
    //     cout << buf << endl;
    // }

    //方式3
    // string buf;
    // while (getline(ifs,buf))
    // {
    //     cout << buf << endl;
    // }

    //方式4 不推荐
    char c;
    while((c = ifs.get()) != EOF)   //如果没有读到文件尾部
    {
        cout << c;
    }


    //4.关闭文件

    ifs.close();


}


int main()
{
    test();

    return 0;
}