#include <iostream>
#include <queue>

using namespace std;

void test()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "队列大小:" << q.size() << endl;
    cout << "队头:" << q.front() << endl;
    cout << "队尾:" << q.back() << endl;
    
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << "队列大小:" << q.size() << endl;
    
}

int main()
{
    test();
    return 0;
}