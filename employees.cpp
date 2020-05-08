// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	structure and vector
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

struct Address
{
	string cityName, streetName;
	int postalCode;
};

struct Employee
{
	string lastName;
	int empID;
	Address adrs;
};

vector<Employee> emps;

void useInfo();
void getInfo();
void showInfo(vector<Employee>);
vector<Employee> findStrt(string name);

int main()
{
	int choice;
	string strtName;
	vector<Employee> em;
	cout << "To set data manually, Enter 1." << endl;
	cout << "To use data in file, Enter 2." << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		getInfo();
		break;
	case 2:
		useInfo();
		showInfo(emps);
		break;
	default:
		cout<<"Wrong number.";
		exit(0);
	}
	cout << "Enter street name to search for: ";
	cin >> strtName;
	em = findStrt(strtName);
	showInfo(em);
	return 0;
}

void useInfo()
{
	ifstream input("employees.txt", ios::in);
	vector<string> v;
	if (input)
	{
		string line, field;
		while (getline(input, line))
		{
			stringstream ss(line);
			while (getline(ss, field, '\t'))
			{
				v.push_back(field);
			}
			Employee e;
			e.lastName = v[0];
			e.empID = stoi(v[1]);
			e.adrs.cityName = v[2];
			e.adrs.streetName = v[3];
			e.adrs.postalCode = stoi(v[4]);
			emps.push_back(e);
			v.clear();
		}
	}
}

void getInfo()
{
	Employee e;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name, ID, city name, street name and postal code: ";
		cin >> e.lastName >> e.empID >> e.adrs.cityName >> e.adrs.streetName >> e.adrs.postalCode;
		emps.push_back(e);
	}
}

void showInfo(vector<Employee> e)
{
	for (int i = 0; i < e.size(); i++)
	{
		cout << e[i].lastName << "\t" << e[i].empID << "\t" << 
			e[i].adrs.cityName << "\t" << e[i].adrs.streetName << "\t" << e[i].adrs.postalCode << endl;
	}
}

vector<Employee> findStrt(string strtName)
{
	vector<Employee> vec;
	vector<Employee>::iterator itr, itr2;
	for (itr = emps.begin(); itr != emps.end(); itr++)
	{
		if (itr->adrs.streetName == strtName)
		{
			vec.push_back(*itr);
		}
	}
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = i; j < vec.size(); j++)
		{
			if (vec[i].lastName > vec[j].lastName)
			{
				swap(vec[i], vec[j]);
			}
		}
	}

	return vec;
}
