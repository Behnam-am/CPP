// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	reverse text but not words
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string str1, word, str2 = "";

	getline(cin, str1);
	stringstream phrase(str1);

	while (getline(phrase, word, ' '))
	{
		str2 = word + " " + str2;
	}

	// remove last space
	str2.erase(str1.length());

	cout << str2;

	return 0;
}
