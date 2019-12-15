// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که دو عدد را گرفته، کوچکترین مضرب مشترک را محاسبه کند

#include <iostream>

using namespace std;

// Functions prototype
int minimum(int, int);
int bmm(int, int);  // Greatest common divisor
int kmm(int, int);  // Least common multiple

int main() {
	int a, b, result;
	cout << "Enter two number to calculate least common multiple: ";
	cin >> a >> b;

	result = kmm(a, b);
	cout << "Least common multiple of " << a << " and " << b << " is " << result;

	return 0;
}


int minimum(int x, int y) {
	int m;
	m = (x < y) ? x : y;
	return m;
}

int bmm(int x, int y) {
	int i;
	int m = minimum(x, y);
	for (i = m; i > 0; i--)
	{
		if (x % i == 0 && y % i == 0) {
			break;
		}
	}
	return i;
}

int kmm(int x, int y) {
	int k;
	k = (x * y) / bmm(x, y);
	return k;
}