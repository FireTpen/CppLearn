//#include <iostream>
//
//using namespace std;
//#define len 10
//
//void bubblesort(int *arr)
//{
//	int temp,i,j;
//	for (i = 0;i < (len - 1);i++)
//	{
//		for (j = 0;j < (len - i - 1);j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//
//		}
//	}
//
//}
//
//void display(int *arr)
//{
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	
//	int arr[len] = { 3,7,4,6,1,9,0,5,2,8 };
//
//	bubblesort(arr);
//
//	display(arr);
//
//	system("pause");
//
//	return 0;
//}