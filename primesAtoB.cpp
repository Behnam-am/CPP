// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
برنامه‌ای بنویسید که از کاربر دو سر یک بازه را گرفته مانند
(a,b)
و اعداد اول داخل آن بازه را چاپ کند
اعداد خروجی باید با علامت کاما (,) از هم جدا شوند
ابتدا و انتهای بازه نباید در نظر گرفته شوند
*/
#include <iostream>

using namespace std;

bool isPrime(int);

int main() {
	int a, b;
	cout << "Enter two number for start and end :" << endl;
	cin >> a >> b;
	// check b is bigger than a
	if (a > b)
	{
		swap(a, b);
	}

	for (int i = a + 1; i < b; i++)
	{
		if (isPrime(i))
		{
			cout << i << ", ";
		}
	}
	cout << "\b\b " << endl;

	return 0;
}

bool isPrime(int x)
{
	for (int i = 2; i < x / 2; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}
