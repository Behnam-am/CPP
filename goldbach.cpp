// There are 10 types of people in this world. Those who understand binary and those who don't.
// نظریه گلدباخ

#include <iostream>

using namespace std;

bool isPrime(int);

int main() {
	
	int number, a, b;
	do {
		cout << "Enter an even number grater than 4: ";
		cin >> number;
	} while (number <= 4 && number % 2 != 0);

	for (int i = 2; i < number; i++)
	{
		if (isPrime(i))
		{
			a = i;
			b = number - a;
			if (isPrime(b))
			{
				break;
			}
		}
	}
	cout << "Prime numbers are " << a << " and " << b << endl;
	return 0;
}

bool isPrime(int num)
{
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
