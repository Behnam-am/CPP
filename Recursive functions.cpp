// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	****توابع بازگشتی****
	1 فاکتوریل
	2 فیبوناچی
	3 جمع عناصر آرایه
	4 برج هانوی
*/
#include <iostream>

using namespace std;

int fact(int);
int fibo(int);
int RecSum(int[], int);
void hanoi(int, char, char, char);

int main()
{
	const int n = 10;
	int a[n] = { 1,2,3,4,5,6,7,8,9,10 }, m;
	cout << fact(5) << endl;
	cout << fibo(7) << endl;
	cout << RecSum(a, n) << endl;
	cout << "Enter number of disks in hanoi tower: ";
	cin >> m;
	hanoi(m, 'A', 'B', 'C');

	return 0;
}

int fact(int n) {
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}

int fibo(int n) {
	if (n < 2)
	{
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}
}

int RecSum(int a[], int n) {
	if (n==1)
	{
		return a[0];
	}
	else
	{
		return a[n - 1] + RecSum(a, n - 1);
	}
}

void hanoi(int m, char a, char b, char c) {
	if (m == 1)
	{
		cout << "Move a disk from " << a << " to " << c << endl;
	}
	else
	{
		hanoi(m - 1, a, c, b);
		cout << "Move a disk from " << a << " to " << c << endl;
		hanoi(m - 1, b, a, c);
	}
}