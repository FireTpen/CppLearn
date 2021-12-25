#include <iostream>
#include <vector>

using namespace std;

void printvector(vector<int> &v)
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
    if(v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空" << endl;
    }
    v1.assign(5,7);
    printvector(v1);
    if(v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空" << endl;
    }

    cout << "v1的容量为：" << v1.capacity() << endl;
    cout << "v1的尺寸大小为:" << v1.size() << endl;

    v1.resize(3);
    printvector(v1);

    v1.resize(10,4);
    printvector(v1);
}

int main()
{
    test();

    return 0;
}