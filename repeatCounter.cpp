// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	برنامه ای که 20 عدد را دریافت کرده
	تعداد تکرار هر عدد را مشخص کند
*/
#include <iostream>
#include <string>

using namespace std;

int repeatCounter(double[], int, double[][2]);

int main()
{
	const int n = 20;
	double nums[n], result[n][2] = { 0 };
	int idx;

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	idx = repeatCounter(nums, n, result);

	for (int i = 0; i < idx; i++)
	{
		string time = (result[i][1] == 1) ? " time." : " times.";
		cout << result[i][0] << " : " << result[i][1] << time << endl;
	}

	return 0;
}

int repeatCounter(double nums[], int n, double result[][2])
{
	int idx = 0;
	bool flag;
	for (int i = 0; i < n; i++)
	{
		flag = true;
		for (int j = 0; j < idx; j++)
		{
			if (result[j][0] == nums[i])
			{
				result[j][1]++;
				flag = false;
				break;
			}
		}
		if (flag)
		{
			result[idx][0] = nums[i];
			result[idx][1] = 1;
			idx++;
		}
	}
	return idx;
}