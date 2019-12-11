// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که پرتاب تاس را تا جایی ادامه میدهد که
// تعداد اعداد زوج آمده 2 برابر فردها بشود

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// First solution with while loop

int main()
{
	srand(time(0));
	int num = 0, odds = 0, evens = 0;

	while (evens != odds * 2 || num == 0)
	{
		num = rand() % 6 + 1;
		if (num % 2 == 0)
		{
			evens++;
		}
		else
		{
			odds++;
		}
	}

	cout << "Dice rolls " << evens + odds << " times.\n"
		<< "It was " << evens << " even numbers\n"
		<< "and " << odds << " odd numbers.\n";
	return 0;

}

// second solution with for loop
/*

int main()
{
	srand(time(0));
	int num = 0, odds = 0, evens = 0;

	for (;evens != odds * 2 || num == 0;)
	{
		num = rand() % 6 + 1;
		if (num % 2 == 0)
		{
			evens++;
		}
		else
		{
			odds++;
		}
	}

	cout << "Dice rolls " << evens + odds << " times.\n"
		<< "It was " << evens << " even numbers\n"
		<< "and " << odds << " odd numbers.\n";
	return 0;

}

*/

// third solution with do-while loop
/*

int main()
{
	srand(time(0));
	int num = 0, odds = 0, evens = 0;

	do{
		num = rand() % 6 + 1;
		if (num % 2 == 0)
		{
			evens++;
		}
		else
		{
			odds++;
		}
	}while(evens != odds * 2);

	cout << "Dice rolls " << evens + odds << " times.\n"
		<< "It was " << evens << " even numbers\n"
		<< "and " << odds << " odd numbers.\n";
	return 0;

}

*/