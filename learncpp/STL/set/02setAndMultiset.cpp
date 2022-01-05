#include <iostream>
#include <set>

using namespace std;

void printSet(set<int> &st)
{
    for(set<int>::iterator it = st.begin();it != st.end();it++)
    {
        cout << (*it) << " "; 
    }
    cout << endl;
}

void printMultiset(multiset<int> &mst)
{
    for(multiset<int>::iterator mit = mst.begin();mit != mst.end();mit++)
    {
        cout << (*mit) << " ";
    }
    cout << endl;
}

void test()
{
    //1.set
    set<int> st;
    for(int i = 0;i < 5;i++)
    {
        st.insert(i);
        st.insert(i);
    }
    printSet(st);
    cout << "----------------------------" << endl;

    multiset<int> mst;
    for(int i = 0;i < 5;i++)
    {
        mst.insert(i);
        mst.insert(i);
    }
    printMultiset(mst);
}

int main()
{
    test();
    return 0;
}