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
	cout << "最重的猪是：" << max << endl;

	/*案例2，元素逆置
		方法1：直接从数组最后一位元素开始打印直到第一位;
		方法2：用循环嵌套 i = 0;i <5;i++;j = 0;j < (5-i);j++;
	
	*/
	return 0;
}