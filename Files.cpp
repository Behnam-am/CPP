// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	virtual 3
*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	string fileName, line, word, result="";
	int lineCounter = 0, wordCounter = 0;
	cout << "Enter file name: ";
	cin >> fileName;
	ifstream input(fileName, ios::in);
	ofstream output("out.txt", ios::out | ios::app);
	if (input && output)
	{
		while (getline(input, line))
		{
			lineCounter++;
			result += "Line " + to_string(lineCounter) + ":\n";
			stringstream sline(line);
			while (getline(sline, word, ' '))
			{
				wordCounter++;
				for (int i = 0; i < word.length(); i++)
				{
					char ch = word[i];
					if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')))
					{
						word.erase(i, 1);
						i--;
					}
				}
				result += word + "\n";
			}
		}
		output << result << endl;
		input.close();
		output.close();
	}
	else
	{
		cout << "Unable to open file.";
	}
	cout << "# words = " << wordCounter << endl;
	cout << "# lines = " << lineCounter << endl;
	return 0;
}

