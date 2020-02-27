// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	برنامه ای که آرایه ای را دریافت کرده و عناصر آن را نسبت به وسط قرینه کند
*/
#include <iostream>

using namespace std;

int main()
{
	const int arrSize = 9;
	int arr[arrSize];
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < arrSize/2; i++)
	{
		swap(arr[i], arr[arrSize - 1 - i]);
	}
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

