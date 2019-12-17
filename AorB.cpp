// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که حاصلضرب دو عدد را با جمع متوالی آنها
// و عدد بزرگتر به توان عدد کوچکتر را با ضرب متوالی آنها محاسبه کند


#include <iostream>
#include <cmath>

using namespace std;

char menu();
int mulByAdd(int, int);
float powByMul(int, int);

int main()
{
	int a, b, result;
	float answer;
	char choice;
	cout << "Enter two number: ";
	cin >> a >> b;
		if (a > b)
	{
		swap(a,b);
	}
	choice = menu();

	switch (choice)
	{
	case 'A':
		result = mulByAdd(a, b);
		cout << a << " * " << b << " = " << result << endl;
		break;
	case 'B':
		answer = powByMul(a, b);
		cout << b << " ^ " << a << " = " << answer << endl;
		break;
	default:
		cout << "Invalid Character" << endl;
		break;
	}
	return 0;
}

char menu(){
	char choice;
	cout << "To calculate multiply by sum, Enter 'A'.\n";
	cout << "To calculate power bu multiply, Enter 'B'.\n";
	cin >> choice;
	if (choice == 'a' || choice == 'A')
	{
		return 'A';
	}
	else if (choice == 'b' || choice == 'B')
	{
		return 'B';
	}
	return choice;
}

int mulByAdd(int x, int y){
	int mul = 0;
	for (int i = 0; i < abs(x); i++)
	{
		mul += y;
	}
	if (x < 0)
	{
		mul *= -1;
	}
	return mul;
}
float powByMul(int x, int y){
	float power = 1;
	for (int i = 0; i < abs(x); i++)
	{
		power *= y;
	}
	if (x < 0)
	{
		power = 1.0 / power;
	}
	return power;
}
