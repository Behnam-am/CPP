// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که با استفاده از ارجاع ها دو عدد را به تابع فرستاده
// و ماکزیمم و مینیمم آنها را محاسبه کند

#include <iostream>

using namespace std;

void maxmin(int, int, int&, int&);

int main() {
	int a, b, max, min;
	cout << "Enter two numbers to calculate max and min: ";
	cin >> a >> b;
	maxmin(a, b, max, min);
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	return 0;
}

void maxmin(int a, int b, int &max, int &min) {
	max = (a > b) ? a : b;
	min = (a < b) ? a : b;
}