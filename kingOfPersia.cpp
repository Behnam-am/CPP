// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که بازه زمانی تولد و مرگ پادشاهان را گرفته
// حداکثر و حداقل سن آنها را محاسبه کند

#include <iostream>

using namespace std;

const int minYear = -5000;
const int maxYear = 2000;

bool allZero(int, int, int, int);
bool ageCalc(int, int, int, int, int&, int&);

int main() {

	int a, b, c, d, minA, maxA;
	while (true) {
		cout << "Enter two years for birth period:\n";
		cin >> a >> b;
		cout << "Enter two years for death period:\n";
		cin >> c >> d;
		if (allZero(a, b, c, d))
		{
			cout << "Program Ends." << endl;
			break;
		}
		else
		{
			if (ageCalc(a, b, c, d, minA, maxA))
			{
				cout << "minimum age = " << minA << endl;
				cout << "maximum age = " << maxA << endl << endl;
			}
			else
			{
				cout << "Invalid Years Entered." << endl << endl;
			}
		}
		cout << "Enter four 0 to exit." << endl;
	}
	return 0;
}

bool allZero(int a, int b, int c, int d)
{
	if (a == 0 && b == 0 && c == 0 && d == 0)
	{
		return true;
	}
	return false;
}
bool ageCalc(int a, int b, int c, int d, int& minAge, int& maxAge)
{
	if (a >= minYear && b >= a && c > b && d >= c && d <= maxYear)
	{
		minAge = c - b;
		maxAge = d - a;
		return true;
	}
	else
	{
		return false;
	}
}
