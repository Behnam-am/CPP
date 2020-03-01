// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	برنامه ای که حروف یک رشته را به صورت یک در میان در رشته دیگر قرار دهد
	"abcdef" & "xy" ==> axbycxdyexf
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "abcdef", substr = "xy", finalStr;
	for (int i = 0; i < str.length(); i++)
	{
		finalStr += str[i];
		finalStr += substr[i % substr.length()];
	}
	finalStr.erase(finalStr.length() - 1);
	cout << finalStr;
	return 0;
}

