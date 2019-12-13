// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای بنويسيد که ١٠٠ عدد اول سری فيبوناچی را بنويسد

#include <iostream>

using namespace std;


int main() {

	double first = 1, second = 1, third;
	cout << "First 100 numbers of fibonacci are:" << endl;
	cout << 1 << "  " << 1 << "  ";
	for (int i = 2; i < 1000; i++)
	{
		third = first + second;
		cout << third << "  ";
		first = second;
		second = third;
	}
	return 0;
}


