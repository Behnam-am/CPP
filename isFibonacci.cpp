// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای بنويسيد که يک عدد از ورودی بگيرد
// و بگويد آيا متعلق به سری فيبوناچی هست يا نه


#include <iostream>

using namespace std;


int main() {

	double x, first = 0, second = 1, third = 1;
	cout << "Enter a number to check if it's in  fibunacci series." << endl;
	cin >> x;
	while ( third < x)
	{
		third = first + second;
		first = second;
		second = third;
	}
	if (x == third)
	{
		cout << x << " is in fibonacci series." << endl;
	}
	else
	{
		cout << x << " is in not fibonacci series." << endl;
	}

	return 0;
}


