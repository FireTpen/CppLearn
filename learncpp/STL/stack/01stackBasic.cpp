#include <iostream>
#include <stack>

using namespace std;

void test()
{
    //1.创建栈
    stack<int> stk;

    //2.压入数据
    for(int i = 0;i < 5;i++)
    {
        stk.push(i);
    }
    //3.查看栈大小
    cout << "栈大小："  << stk.size() << endl;

    //4.出栈
    while(!stk.empty())
    {
        cout << "当前栈顶：" << stk.top() << endl;
        stk.pop();
        
    }
    

}

int main()
{
    test();
    return 0;
}