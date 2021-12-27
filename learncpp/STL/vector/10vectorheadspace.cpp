#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    //利用reserve来预留空间
    v.reserve(100000);

    int num = 0; //统计开辟次数
    int *p = NULL;
    for(int i = 0;i < 100000;i++)
    {
        v.push_back(i);
        if(p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }
    cout << "num = "<< num << endl;

    return 0;
}