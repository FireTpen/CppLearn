#include <iostream>

using namespace std;

int main7()
{
	int score[3][3] = { {100,100,100},{97,80,22},{99,87,67} };
	int i, j;

	cout << "\t" << "语文\t数学\t英语" << endl;
	for (i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			cout << "张三\t";
		}
		if (i == 1)
		{
			cout << "李四\t";
		}
		if (i == 2)
		{
			cout << "王五\t";
		}
		for (j = 0; j < 3; j++)
		{
			cout << score[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}