// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	برنامه ای که یک آرایه 4 در 5 را از ورودی گرفته
	آن را به صورت سطری و ستونی چاپ کند
*/
#include <iostream>

using namespace std;

int main()
{
	const int r = 4, c = 5;
	int num[r][c];
	// Get Numbers
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter num[" << i << "][" << j << "] : ";
			cin >> num[i][j];
		}
	}
	// Print row
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << num[i][j] << "\t";
		}
		cout << endl;
	}
	// Print column
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cout << num[j][i] << "\t";
		}
		cout << endl;
	}
	return 0;
}
