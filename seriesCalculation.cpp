// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای بنويسيد که چند جمله ای
//     x^3   x^5   x^7
// x - --- + --- - --- + ...
//      3!    5!    7!
// را با دقت ٠٫٠٠٠٠٠١ حساب کند و هم مقدار تابع و هم
// تعداد جمله هايی که در محاسبه آن به کار رفت را بنويسد

#include <iostream>

using namespace std;

int factorial(int);

int main() {

	double x, previous, next, sum = 0, dif;
	int counter = 1, sign = -1, i = 3;
	cout << "Enter a number (x) to calculate series." << endl;
	cin >> x;
	next = sum = x;
	do
	{
		previous = next;
		next = sign * pow(x, i) / factorial(i);
		sum += next;

		sign *= -1;
		counter++;
		i += 2;
		dif = fabs(previous - next);

	} while (dif > 0.000001);

	cout << "Total number of sentences = " << counter << endl;
	cout << "Sum of all sentences = " << sum << endl;
	
	return 0;
}

int factorial(int x)
{
	if (x > 1)
	{
		return x * factorial(x - 1);
	}
	else 
	{
		return 1;
	}
}
