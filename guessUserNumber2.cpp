// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که عدد انتخاب شده توسط کاربر را حدس بزند

#include <iostream>

using namespace std;


int main() {

	int start = 0, middle = 50, end = 101;
	char answer;
	cout << "Choose a number between 0 and 100." << endl;
	while (true)
	{
		cout << "Is it in [" << start << " - " << middle << ")?(y/n) " << endl;
		cin >> answer;
		if (answer == 'y')
		{
			end = middle;
			middle = (end + start) / 2;
		}
		else if (answer == 'n')
		{
			start = middle;
			middle = (end + start) / 2;
		}
		if (end - start == 1)
		{
			cout << "It's " << start << endl;
			break;
		}
	}
	return 0;
}
