// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه نمایش اعداد اول بین دو عدد داده شده توسط کاربر
// با استفاده از توابع

#include <iostream>
#include <math.h>

using namespace std;

bool avval(int n)
{
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int a, b;
	cin >> a >> b;

	if (a > b)
		swap(a, b);

	for (int i = a; i <= b; i++)
	{
		if (avval(i))
		{
			cout << i << " ";
		}
	}
	
	return 0;
}
