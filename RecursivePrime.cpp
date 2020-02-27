// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	تابع بازگشتی که اول بودن عدد را چک کند
*/
#include <iostream>
#include <string>

using namespace std;

bool isPrime(int, int);

int main()
{
	int x;
	string ans;
	cin >> x;
	ans = (isPrime(x, x / 2) == true) ? "Prime" : "Not Prime";
	cout << ans;
	return 0;
}

bool isPrime(int x, int d)
{
	if (x == 1 || d == 1)
	{
		return true;
	}
	else if (x < 1 || x % d == 0)
	{
		return false;
	}
	else
	{
		return isPrime(x, d - 1);
	}
}
