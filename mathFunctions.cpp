// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که با استفاده از توابع یک منو را نشان داده
// و با توجه به انتخاب کاربر یکی از اعمال نوشته شده را انجام دهد

#include <iostream>

using namespace std;

// Functions prototype
int menu();
bool isPrime(int);
void divisor(int);
int showDigis(int);

int main() {
	
	int choise, number;
	choise = menu();
	switch (choise)
	{
	case 1:
		cout << "Enter your number: ";
		cin >> number;
		if (isPrime(number))
		{
			cout << number << " is prime.";
		}
		else
		{
			cout << number << " is not prime.";
		}
		break;
	case 2:
		cout << "Enter your number: ";
		cin >> number;
		divisor(number);
		break;
	case 3:
		cout << "Enter your number: ";
		cin >> number;
		int count;
		count = showDigis(number);
		cout << number << " has " << count << " digits.\n";
		break;
	case 4:
		cout << "Goodby Human. ;)\n";
		exit(0);
		break;
	default:
		cout << "Invalid choise.\n";
	}

	return 0;
}

int menu()
{
	int choise;
	cout << "Welcome to my simple math program\n";
	cout << "If you want to:\n";
	cout << "\t1) Check is a number is prime, Enter 1\n";
	cout << "\t2) Show divisors of a number, Enter 2\n";
	cout << "\t3) Show digits of a number and count of them, Enter 3\n";
	cout << "If you want to close the program, Enter 4. Have fun!\n";
	cin >> choise;
	return choise;
}

bool isPrime(int number)
{
	for (int i = 2; i <= number/2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

void divisor(int number)
{
	cout << "Divisors of " << number << " are:\n";
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			cout << i << endl;
		}
	}
}

int showDigis(int number)
{
	cout << "Digits of " << number << " are:\n";
	int digits = 0, r;
	while (number > 0)
	{
		r = number % 10;
		cout << r << endl;
		number /= 10;
		digits++;
	}
	return digits;
}

