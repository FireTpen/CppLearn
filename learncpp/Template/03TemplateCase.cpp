/*
    案例描述：
    ·利用函数模板封装一个排序函数，可以对不同数据类型数组进行排序
    ·排序规则从大到小，排序算法为选择排序
    ·分别利用char数组和int数组进行测试

    规则：从大到小
    算法：选择排序
    测试：char数组、int数组
*/

#include <iostream>

using namespace std;

//两值交换模板
template <class T>
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


//数组选择排序模板
template <class T>
void mySort(T *arr,int num)
{
    int max;
    for(int i = 0;i < num;i++)
    {
        max = i;
        for(int j = i + 1;j < num;j++)
        {
            if(arr[max] < arr[j])
            {
                max = j;
            }
        }
        mySwap(arr[i],arr[max]);
    }

}

//数组显示模板
template <class T>
void myDisplay(T *arr,int num)
{
    for(int i = 0;i < num;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//测试字符数组
void test1()
{
    char carr[] = "aeioukldcjbz";
    int num = sizeof(carr) / sizeof(char);
    mySort(carr,num);
    myDisplay(carr,num);
}

//测试整形数组
void test2()
{
    int iarr[] = {1,6,2,4,5,9,3,8,7,0};
    int num = sizeof(iarr) / sizeof(int);
    mySort(iarr,num);
    myDisplay(iarr,num);
}


int main()
{
    test1();

    test2();

    return 0;
}