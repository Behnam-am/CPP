// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	tokenize a string Without using stringstream
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "tokenize a string Without using stringstream", str2, word;
	int loc;
	while (str1.find(" ") != -1)
	{
		loc = str1.find(" ");
		word = str1.substr(0, loc);
		cout << word << endl;
		str1.erase(0, loc + 1);
	}

	return 0;
}

