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

	//ͳ������ռ���ڴ�ռ��С��Ԫ��ռ�ô�С�����鳤��
	cout << "arr2ռ���ڴ�ռ�:" << sizeof(arr2) << endl;
	cout << "arr2Ԫ�ش�С:" << sizeof(arr2[0]) << endl;
	cout << "arr2���鳤��:" << sizeof(arr2) / sizeof(arr2[0]) << endl;

	cout << "arr2������׵�ַ:" << arr2 << endl;
	cout << "arr2[0]�ĵ�ַ:" << &arr2[0] << endl;
	cout << "arr2[1]�ĵ�ַ:" << &arr2[1] << endl;
	return 0;
}