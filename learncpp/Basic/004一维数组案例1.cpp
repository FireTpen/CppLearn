#include <iostream>

using namespace std;

int main4()
{
	int arr[5] = { 112,168,124,177,113 };
	int i,max = 0;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "���ص����ǣ�" << max << endl;

	/*����2��Ԫ������
		����1��ֱ�Ӵ��������һλԪ�ؿ�ʼ��ӡֱ����һλ;
		����2����ѭ��Ƕ�� i = 0;i <5;i++;j = 0;j < (5-i);j++;
	
	*/
	return 0;
}