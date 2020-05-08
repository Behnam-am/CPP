// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	find character doubles
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
	string str;
	int counter = 0;
	cout << "Enter phrase: ";
	getline(cin, str);
	for (int i = 1; i < str.length()-2; i++)
	{
		char c = str[i];
		if (str[i - 1] != c && str[i + 1] == c && str[i+2] != c)
		{
			counter++;
		}
	}
	cout << "There are " << counter << " character doubles." << endl;
	return 0;
}
