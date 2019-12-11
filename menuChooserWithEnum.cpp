// There are 10 types of people in this world. Those who understand binary and those who don't.

#include <iostream>
#include <string>

using namespace std;


int main() {

	int choice;
	string level;

	enum difficulty
	{
		Easy = 1,
		Normal,
		Hard
	};

	cout << "Difficulty Levels:\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n";
	
	cout << "choice: ";
	cin >> choice;

	switch (choice) {
	case Easy:
		level = "Easy";
	case Normal:
		level = "Normal";
	case Hard:
		level = "Hard";
	}
	cout << "You chose " << level;

	return 0;
}