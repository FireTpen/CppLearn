#include <iostream>

using namespace std;

int main6()
{
	int arr[3][3] = { {1}, {2}, {3}};

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "数组大小：" << sizeof(arr) << endl;
	cout << "数组一行大小：" << sizeof(arr[0]) << endl;
	cout << "数组元素大小：" << sizeof(arr[0][0]) << endl;

	return 0;
}