#include <iostream>

using namespace std;

int main3()
{
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};

	int arr2[] = { 1,2,3,4,5,6,7 };

	int arr3[10] = { 0 };

	int i;
	for (i = 0; i < 10; i++)
	{
		cout << arr1[i] << endl;
	}

	//统计数组占用内存空间大小，元素占用大小，数组长度
	cout << "arr2占用内存空间:" << sizeof(arr2) << endl;
	cout << "arr2元素大小:" << sizeof(arr2[0]) << endl;
	cout << "arr2数组长度:" << sizeof(arr2) / sizeof(arr2[0]) << endl;

	cout << "arr2数组的首地址:" << arr2 << endl;
	cout << "arr2[0]的地址:" << &arr2[0] << endl;
	cout << "arr2[1]的地址:" << &arr2[1] << endl;
	return 0;
}