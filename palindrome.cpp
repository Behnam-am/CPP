// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه تشخیص متقارن بودن یک عدد

#include <iostream>

using namespace std;


int main() {
	
	int n, r, nCopy, result = 0;
	cin >> n;
	nCopy = n;

	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		result = result * 10 + r;
	}

	if (nCopy == result) cout << "YES";
	else cout << "NO";


	return 0;
}
