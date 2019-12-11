// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که عدد انتخاب شده توسط کاربر را حدس میزند

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));

	int guess, randStart, randEnd;
	char answer, correct, HorL;

	cout << "Pick a Number between 'A' and 'B'. I will guess it ;)\n";
	cout << "Note that 'A' and 'B' are positive.\n";
	cout << "Now give me 'A' and 'B': ";
	cin >> randStart >> randEnd;
	if (randStart > randEnd)
	{
		swap(randStart, randEnd);
	}
	do {
		cout << "Ok. Now Are you ready to start?(Y / N) ";
		cin >> answer;
	} while (!(answer == 'y' || answer == 'Y'));

	do {
		guess = rand() % (randEnd - randStart + 1) + randStart;
		cout << "I think your number is " << guess << endl;
		cout << "Is that True or your number is Higher or Lower?(T = true / H = Higher / L = lower) ";
		cin >> answer;
		if (answer == 'h' || answer == 'H')
		{
			randStart = guess + 1;
		}
		else if (answer == 'l' || answer == 'L')
		{
			randEnd = guess - 1;
		}
	} while (!(answer == 't' || answer == 'T'));

	cout << "****************************************************\n";
	cout << "HAHAHAHA. I BEAT you HUMAN. I ALWAYS beat you HUMAN.\n";
	cout << "****************************************************\n";

	return 0;
}