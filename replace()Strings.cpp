// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	جایگزینی رشته ها با استفاده از تابع
	replace()
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "this is a test string.";
	string str2 = "n example";
	string str3 = "sample phrase";
	string str4 = "useful.";

	// replace signatures used in the same order as described above:

	// Using positions:					0123456789*123456789*12345
	str.replace(9, 5, str2);			// "this is an example string." (1)
	cout << str << endl;
	str.replace(19, 6, str3, 7, 6);		// "this is an example phrase." (2)
	cout << str << endl;
	str.replace(8, 10, "just a");		// "this is just a phrase."     (3)
	cout << str << endl;
	str.replace(8, 6, "a shorty", 7);	// "this is a short phrase."    (4)
	cout << str << endl;
	str.replace(22, 1, 2, '*');			// "this is a short phrase***"  (5)
	cout << str << endl;
	int i = 3;
	str.replace(22, 2, i, '!');			// "this is a short phrase!!!"  (6)
	cout << str << endl;

	// Using iterators:													0123456789*123456789*
	str.replace(str.begin(), str.end() - 3, str3);						// "sample phrase!!!"      (1)
	cout << str << endl;
	str.replace(str.begin(), str.begin() + 6, "replace");				// "replace phrase!!!"     (2)
	cout << str << endl;
	str.replace(str.begin() + 8, str.begin() + 14, "is coolness", 7);	// "replace is cool!!!"    (3)
	cout << str << endl;
	str.replace(str.begin() + 12, str.end() - 4, 4, 'o');				// "replace is cooool!!!"  (4)
	cout << str << endl;
	str.replace(str.begin() + 11, str.end(), str4.begin(), str4.end());	// "replace is useful."    (5)
	cout << str << endl;

	return 0;
}

