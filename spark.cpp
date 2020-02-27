// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	برنامه ای که ماتریس اسپارکس را تشکیل دهد
	و مقادیر مورد نیاز کاربر را به او نشان دهد
*/
#include <iostream>

using namespace std;

int sparksFinder(int[][3], int, int, int);

int main()
{
	const int r = 5, c = 6;
	int arr[r][c], sparks[r * c][3] = { r,c }, idx = 1, row, col;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] != 0)
			{
				sparks[0][2]++;
				sparks[idx][0] = i;
				sparks[idx][1] = j;
				sparks[idx][2] = arr[i][j];
				idx++;
			}
		}
	}

	cout << "Enter row and column: ";
	cin >> row >> col;
	if (row < 0 || row >= r || col < 0 || row >= c)
	{
		cout << "Invalid choice." << endl;
	}
	else
	{
		cout << sparksFinder(sparks, row, col, idx);
	}
	return 0;
}

int sparksFinder(int sp[][3], int r, int c, int idx)
{
	int low = 1, high = idx - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (sp[mid][0] == r && sp[mid][1] == c)
		{
			return sp[mid][2];
		}
		else if (sp[mid][0] > r || (sp[mid][0] == r && sp[mid][1] > c))
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return 0;
}