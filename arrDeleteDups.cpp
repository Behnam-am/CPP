// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که عناصر تکراری آرایه را حذف کند

#include <iostream>
#include <math.h>
using namespace std;

const int arrSize = 10;

int main() {

	float grades[arrSize], x;
	int j = 0;

	// get grades elements
	cout << "Enter " << arrSize << " grades:\n";
	for (int i = 0; i < arrSize; i++)
	{
		cin >> grades[i];
	}

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i + 1; j < arrSize; j++)
		{
			if (grades[i] == grades[j])
			{
				grades[j] = -1;
			}
		}
	}
	
	// show grades array
	cout << "Your array with no dupicate = [";
	for (int i = 0; i < arrSize; i++)
	{
		if (grades[i] >= 0) {
			cout << grades[i] << ", ";
		}
	}
	cout << "\b\b]" << endl;

	return 0;
}

