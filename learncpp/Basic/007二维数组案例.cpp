#include <iostream>

using namespace std;

int main7()
{
	int score[3][3] = { {100,100,100},{97,80,22},{99,87,67} };
	int i, j;

	cout << "\t" << "����\t��ѧ\tӢ��" << endl;
	for (i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			cout << "����\t";
		}
		if (i == 1)
		{
			cout << "����\t";
		}
		if (i == 2)
		{
			cout << "����\t";
		}
		for (j = 0; j < 3; j++)
		{
			cout << score[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}