// There are 10 types of people in this world. Those who understand binary and those who don't.
// Solution of:
// https://github.com/Behnam-am/mabani/blob/master/Account.docx

#include <iostream>
#include <string>

using namespace std;

int menu();
bool checkAccount(int);
double withdraw(double, double);
void deposit(double, double &);
void ShowAccountInfo(string, int, double);
string setName(string);

int main()
{
	string customerName = "Not Set", tempName;
	int accNumber, choice = 1;
	double balance = -1, amount;
	// check account number
	cout << "Welcome to our bank.\nEnter your account number: ";
	cin >> accNumber;
	while (!checkAccount(accNumber)) {
		cout << "Invalid Account Number.\nEnter your account number: ";
		cin >> accNumber;
	}
	// get initial account balance
	cout << "Enter your initial account balance: ";
	cin >> balance;
	while (balance < 0)
	{
		cout << "Invalid balance. Enter your initial account balance: ";
		cin >> balance;
	}
	// choose from menu
	while (choice)
	{
		choice = menu();
		switch (choice)
		{
		case 0:
			cout << "Thanks for your trust.\nGoodby." << endl;
			break;
		case 1:
			cout << "How much money do you want to withdraw? ";
			cin >> amount;
			balance = withdraw(amount, balance);
			break;
		case 2:
			cout << "How much money do you want to deposit? ";
			cin >> amount;
			deposit(amount, balance);
			break;
		case 3:
			ShowAccountInfo(customerName, accNumber, balance);
			break;
		case 4:
			cin.ignore(100, '\n');
			cout << "Enter your name: ";
			getline(cin, tempName);
			if (setName(tempName) != "ERROR")
			{
				customerName = tempName;
			}
			break;
		default:
			cout << "Invalid number. Try again." << endl << endl;
			break;
		}
	}
    return 0;
}

int menu() {
	int choice;
	cout << "To withdraw money, Enter 1." << endl;
	cout << "To deposit money, Enter 2." << endl;
	cout << "To show account info, Enter 3." << endl;
	cout << "To set your name, Enter 4." << endl;
	cout << "To exit, Enter 0." << endl;
	cin >> choice;
	return choice;
}

bool checkAccount(int accNum) {
	if (accNum >= 1e7 && accNum < 1e8)
	{
		return true;
	}
	else
	{
		return false;
	}
}

double withdraw(double amount, double balance) {
	for (int i = 0; i < 3; i++)
	{
		if (balance - amount > 1e4)
		{
			balance -= amount;
			cout << "Now you have " << balance << " toman.\n";
			return (balance);
		}
		else if(i < 2)
		{
			int avb = (balance - 10000 > 0) ? balance - 10000 : 0;
			cout << "your avalible balance is " << avb << " toman. Enter another ammount: ";
			cin >> amount;
		}
	}
	cout << "Transaction failed." << endl << endl;
	return balance;
}

void deposit(double amount, double &balance) {
	if (amount >= 0)
	{
		balance += amount;
	}
	else
	{
		cout << "Invalid amount. Try Again.";
	}
}

void ShowAccountInfo(string CustomerName, int accNumber, double balance) {
	cout << "Customer Name: " << CustomerName << endl;
	cout << "Account Number: " << accNumber << endl;
	cout << "Balance: " << balance << " toman" << endl;
	cout << "Avalible Balance: " << (balance - 10000) << endl << endl;
}

string setName(string tempName) {
	for (int i = 0; i < tempName.length(); i++)
	{
		if (!(tempName[i] >= 'a' && tempName[i] <= 'z') &&
			!(tempName[i] >= 'A' && tempName[i] <= 'Z') &&
			!(tempName[i] == ' ') || 
			!(tempName.length() >= 8 && tempName.length() <= 15))
		{
			cout << "Invalid name." << endl;
			cout << "Name must be 8 to 15 characters including a-z and A-Z." << endl << endl;
			return "ERROR";
		}
	}
	return tempName;
}