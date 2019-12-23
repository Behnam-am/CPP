// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که اشتراک دو آرایه را محاسبه کند

#include <iostream>
#include <math.h>
using namespace std;

bool isInArr(float[], float);

const int arrSize = 10;

int main() {

	float arr1[arrSize], arr2[arrSize], intersectionArray[arrSize], x;
	int interLen;
	// get arr1 elements
	cout << "Enter " << arrSize << " numbers for array 1:\n";
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr1[i];
	}
	// get arr2 elements
	cout << "Enter " << arrSize << " numbers for array 2:\n";
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr2[i];
	}

	// calculate intersection Array
	interLen = 0;
	for (int i = 0; i < arrSize; i++)
	{
		if (isInArr(arr2, arr1[i]) && !(isInArr(intersectionArray, arr1[i])))
		{
			intersectionArray[interLen] = arr1[i];
			interLen++;
		}
	}

	// show intersection array
	cout << "Intersection array = [";
	for (int i = 0; i < interLen; i++)
	{
		cout << intersectionArray[i] << ", ";
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