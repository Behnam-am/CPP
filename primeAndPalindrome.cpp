// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که عدد صحیح مثبتی را از کاربر گرفته
// تمام تعداد اول و متقارن کوچکتر از آن را نمایش دهد

#include <iostream>

using namespace std;

bool isPrime(int);
bool isPalindrome(int);

int main() {
	
	int n;
	cin >> n;

	for (int i = 2; i < n; i++)
	{
		if (isPrime(i) && isPalindrome(i))
		{
			cout << i << endl;
		}
	}
	
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

bool isPalindrome(int num)
{
	int r, numCopy, result = 0;
	numCopy = num;

	while (num > 0)
	{
		r = num % 10;
		num /= 10;
		result = result * 10 + r;
	}

	if (numCopy == result)
	{
		return true;
	}
	return false;
}