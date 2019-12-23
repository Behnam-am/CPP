// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که عناصر تکراری را برای آرایه از کاربر نگیرد

#include <iostream>
#include <math.h>
using namespace std;

bool isInArr(float[], float);

const int arrSize = 10;

int main() {

	float numbers[arrSize], x;
	int j = 0;

	// get numbers elements
	cout << "Enter " << arrSize << " unique numbers:\n";
	while(j < arrSize)
	{
		cin >> x;
		if (!(isInArr(numbers, x)))
		{
			numbers[j] = x;
			j++;
		}
		else
		{
			cout << x << " is duplicate." << endl;
		}
	}
	// show numbers array
	cout << "Your array = [";
	for (int i = 0; i < arrSize; i++)
	{
		cout << numbers[i] << ", ";
	}
	cout << "\b\b]" << endl;
	return 0;
}

bool isInArr(float arr[], float x)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == x)
		{
			return true;
		}
	}
	return false;
}