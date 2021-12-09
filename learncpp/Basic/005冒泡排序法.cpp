#include <iostream>

using namespace std;

int main5()
{
	int arr[10] = { 0,9,2,1,7,4,8,3,5,6 };

	int i, j,temp;

	//√∞≈›≈≈–Ú
	for (i = 0; i < 10 - 1; i++)
	{
		for (j = 0; j < 10 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}


	//¥Ú”°
	for (i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	return 0;
}