// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	برنامه ای که 10 عدد را دریافت و در آرایه قرار دهد
	سپس عددی که بیشترین تکرار را دارد نمایش دهد
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	const int arrSize = 10;
	int arr[arrSize], counter = 1, maxCount = 0, max;
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+10);
	for (int i = 0; i < arrSize - 1; i++)
	{
		if (arr[i] == arr[i+1])
		{
			counter++;
		}
		else if (counter > maxCount)
		{
			maxCount = counter;
			max = arr[i];
			counter = 1;
		}
	}

	cout << "Maximum repeat is: " << max << endl;

	return 0;
}

