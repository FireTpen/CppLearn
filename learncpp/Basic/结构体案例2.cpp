//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct hero {
//	string name;
//	int age;
//	string gender;
//};
//
////void input_info(hero *arr)
////{
////	int i;
////	for (i = 0;i < 5;i++)
////	{
////		cout << "������Ӣ������:";
////		cin >> arr[i].name;
////		cout << "������Ӣ������:";
////		cin >> arr[i].age;
////		cout << "������Ӣ���Ա�:";
////		cin >> arr[i].gender;
////	}
////}
//
//void bubble_display(hero *arr)
//{
//	int i, j;
//	hero temp;
//	for (i = 0;i < (5 - 1);i++)
//	{
//		for (j = 0;j < (5 - i - 1);j++)
//		{
//			if (arr[j].age > arr[j + 1].age)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//
//				/*temp.name = arr[j].name;
//				temp.age = arr[j].age;
//				temp.gender = arr[j].gender;
//
//				arr[j].name = arr[j + 1].name;
//				arr[j].age = arr[j + 1].age;
//				arr[j].gender = arr[j + 1].gender;
//
//				arr[j + 1].name = temp.name;
//				arr[j + 1].age = temp.age;
//				arr[j + 1].gender = temp.gender;*/
//			}
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (i == 0)
//			{
//				cout << "\tӢ��:" << arr[j].name;
//			}
//			if (i == 1)
//			{
//				cout << "\t����:  " << arr[j].age;
//			}
//			if (i == 2)
//			{
//				cout << "\t�Ա�:  " << arr[j].gender;
//			}
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	hero arr[5] = {
//		{"����",17,"��"},
//		{"ŵ��",35,"��"},
//		{"����",21,"Ů"},
//		{"��Ī",8,"Ů"},
//		{"����",18,"��"}
//	};
//
//	//input_info(arr);
//
//	bubble_display(arr);
//
//	system("pause");
//	return 0;
//}