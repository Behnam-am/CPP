// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که 1000 بار یک عدد تصادفی بین 10 تا 20 رو تولید کند
// و در نهایت بگوید چند عدد زوج و چند عدد فرد تولید کرده است

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

	srand(time(NULL));
	
	int num, evens = 0, odds = 0;

	for (int i = 0; i < 1000; i++)
	{
		num = rand() % 11 + 10;
		if (num % 10 == 0)
		{
			evens++;
		}
		else
		{
			odds++;
		}
	}

	cout << evens << " evens and " << odds << " odds";

	return 0;
}