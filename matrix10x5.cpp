// There are 10 types of people in this world. Those who understand binary and those who don't.
/*
	برنامه ای که نمرات 5 درس 10 دانشجو را گرفته و بگوید
	معدل هر دانشجو چقدر است؟
	بالاترین نمره هر دانشجو در چه درس های گرفته شده است؟
	بالاترین نمره هر درس توسط چه دانشجویانی گرفته شده است؟
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	const int s = 10, c = 5;
	double grades[s][c], avg[s] = { 0 }, max;
	int maxG[s][c], idxMaxG, maxS[c][s], idxMaxS;
	// Get grades and set all maxG elements to -1
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < c; j++)
		{
			// Manual fill
			//cout << "Enter student " << i + 1 << " lesson " << j + 1 << " grade: ";
			//cin >> grades[i][j];

			// Random fill
			grades[i][j] = (rand() % 201) / 10.0;
			maxG[i][j] = -1;
		}
	}
	// Set all maxS elements to -1
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < s; j++)
		{
			maxS[i][j] = -1;
		}
	}
	// Calcuate Average
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < c; j++)
		{
			avg[i] += grades[i][j];
		}
		avg[i] /= c;
	}
	// Maximum grade of every student
	for (int i = 0; i < s; i++)
	{
		max = 0;
		idxMaxG = 0;
		for (int j = 0; j < c; j++)
		{
			if (grades[i][j] > max)
			{
				max = grades[i][j];
			}
		}
		for (int j = 0; j < c; j++)
		{
			if (grades[i][j] == max)
			{
				maxG[i][idxMaxG] = j;
				idxMaxG++;
			}
		}
	}
	// Maximum grade of every lesson
	for (int i = 0; i < c; i++)
	{
		max = 0;
		idxMaxS = 0;
		for (int j = 0; j < s; j++)
		{
			if (grades[j][i] > max)
			{
				max = grades[j][i];
			}
		}
		for (int j = 0; j < s; j++)
		{
			if (grades[j][i] == max)
			{
				maxS[i][idxMaxS] = j;
				idxMaxS++;
			}
		}
	}
	// Print Averages
	for (int i = 0; i < s; i++)
	{
		cout << "Student " << i + 1 << " average = " << avg[i] << endl;
	}
	// Print lessons with maximum grade
	for (int i = 0; i < s; i++)
	{
		cout << "Student " << i + 1 << " maximum number(s) is(are) in lesson(s): ";
		for (int j = 0; j < c; j++)
		{
			if (maxG[i][j] != -1)
			{
				cout << maxG[i][j] + 1 << "  ";
			}
		}
		cout << endl;
	}
	// Print students with maximum grade
	for (int i = 0; i < c; i++)
	{
		cout << "Lesson " << i + 1 << " maximum number(s) is(are) gotten by student(s): ";
		for (int j = 0; j < s; j++)
		{
			if (maxS[i][j] != -1)
			{
				cout << maxS[i][j] + 1 << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
