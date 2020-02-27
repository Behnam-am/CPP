// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	برنامه ای که نمره 5 درس 50 دانشجو را همراه ضریب درس گرفته
	سپس رتبه هر دانشجو را حساب کند
*/
#include <iostream>

using namespace std;

int main()
{
	// student and courses count
	const int s = 50, c = 5;
	double grades[s + 1][c], avg[s] = { 0 };
	int rank[s] = { 0 };
	
	for (int i = 0; i < c; i++)
	{
		cout << "Enter ratio of lesson " << i + 1 << ": ";
		cin >> grades[0][i];
	}
	for (int i = 1; i <= s; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter student " << i << " lesson " << j << " grade: ";
			cin >> grades[i][j];
			avg[i - 1] += grades[i][j];
		}
		avg[i - 1] /= c;
	}

	for (int i = 0; i < s; i++)
	{
		rank[i]++;
		for (int j = 0; j < s; j++)
		{
			if (avg[i] < avg[j])
			{
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < s; i++)
	{
		cout << "Student " << i + 1 << " rank is " << rank[i] << endl;
	}

	return 0;
}

