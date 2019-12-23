// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که اجنماع دو آرایه را محاسبه کند

#include <iostream>
#include <math.h>
using namespace std;

bool isInArr(float[], float);

const int arrSize = 10;

int main() {

	float arr1[arrSize], arr2[arrSize], unionArray[2*arrSize], x;
	int unionLen;
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
		cin >> arr1[i];
	}

	// calculate union Array
	unionLen = 0;
	for (int i = 0; i < arrSize; i++)
	{
		if (!(isInArr(unionArray, arr1[i])))
		{
			unionArray[unionLen] = arr1[i];
			unionLen++;
		}
	}
	for (int i = 0; i < arrSize; i++)
	{
		if (!(isInArr(unionArray, arr2[i])))
		{
			unionArray[unionLen] = arr2[i];
			unionLen++;
		}
	}

	// show union array
	cout << "Union array = [";
	for (int i = 0; i < unionLen; i++)
	{
		cout << unionArray[i] << ", ";
	}
	cout << "\b\b]" << endl;;

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