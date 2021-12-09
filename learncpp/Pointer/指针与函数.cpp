//#include <iostream>
//
//using namespace std;
//
////该函数进行值传递 并 交换变量(形参)的值，但是主函数中的a,b不会发生改变
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap1函数内的值：a = " << a << ",b = " << b << endl;
//}
//
//void swap2(int *a,int *b)
//{
//	int temp = *b;
//	*b = *a;
//	*a = temp;
//}
//
//
//int main()
//{
//	int a = 10, b = 5;
//
//	swap1(a, b);
//	cout << "主函数中调用swap1值后：a = " << a << ",b = " << b << endl;
//
//	swap2(&a, &b);
//	cout << "主函数中调用swap2值后：a = " << a << ",b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}