// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	مقایسه رشته ها با استفاده از تابع
	compare()
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "green apple", str2 = "red apple";
	
	// compare equality
	if (str1.compare(str2) == 0)
		cout << str1 << " is " << str2 << endl;
	if (str1.compare(str2) != 0)
		cout << str1 << " is not " << str2 << endl;
	
	// compare length
	if (str1.compare(str2) < 0)
		cout << "\"" << str1 << "\"" << " is longer than " << "\"" << str2 << "\"." << endl;
	if (str1.compare(str2) > 0)
		cout << "\"" << str1 << "\"" << " is shorter than " << "\"" << str2 << "\"." << endl;

	// compare a part of string
	if (str1.compare(6, 5, "apple") == 0)
		cout << str1 << " is an apple." << endl;
	if (str2.compare(str2.length()-5, 5, "apple") == 0)
		cout << str2 << " is an apple." << endl;

	// compare two parts of two strings
	if (str1.compare(6, 5, str2, 4, 5) == 0)
		cout << "Both " << str1 << " and " << str2 << " are apples." << endl;

	return 0;
}

