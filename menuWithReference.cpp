// There are 10 types of people in this world. Those who understand binary and those who don't.
// برنامه ای که با استفاده از ارجاع ها تابع منو را اجرا کند


#include <iostream>

using namespace std;

void menu(int&, int&, char&);

int main() {
	int a, b;
	char choice;
	menu(a, b, choice);
	switch (choice)
	{
	case 'a':
		cout << a << " - " << b << " = " << a - b;
		break;
	case 'b':
		cout << a << " + " << b << " = " << a + b;
		break;
	default:
		cout << choice << " is an invalid character.";
		break;
	}
	return 0;
}

void menu(int &x, int &y, char &ch) {
	cout << "Enter 'a' and 2 number to show x - y.\n";
	cout << "Enter 'b' and 2 number to show x + y.\n";
	cin >> ch;
	cout << "Now enter two numbers: ";
	cin >> x >> y;
}