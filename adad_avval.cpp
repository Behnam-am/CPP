#include <iostream>
#include <math.h>

using namespace std;

bool avval(int n)
{
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0) return false;
	return true;
}

int main()
{
	int a, b;
	cin >> a >> b;

	if (a > b) swap(a, b);

	for (int i = a; i <= b; i++)
	{
		if (avval(i))
		{
			cout << i << " ";
		}
	}
}