// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه رند کردن اعداد به اولین عدد صحیح کوچکتر

#include <iostream>

using namespace std;

int main() {
	float n;
	int rond;

	cin >> n;
	if (n < 0)
	{
		for (int i = 0; i > n; i--)
		{
			rond = i - 1;
		}
	}
	else
	{
		for (int i = 0; i <= n; i++)
		{
			rond = i;
		}
	}

	cout << rond << endl;

	return 0;
}
