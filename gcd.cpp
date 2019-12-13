// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که ب م م دو عدد را محاسبه میکند

#include <iostream>

using namespace std;


int main() {
	
	int a, b, c, result;
	cin >> a >> b;
	if (a < b)
		swap(a, b);
	do {
		result = b;
		c = a % b;
		a = b;
		b = c;
	} while (c > 0);

	cout << result;
	return 0;
}



