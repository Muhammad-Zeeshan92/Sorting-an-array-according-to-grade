#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
struct student
{
	char name[20];
	unsigned int id;
	unsigned int grade;
}temp;
int main()
{
	student Students[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the name of student" << (i+1) << " ";
		cin >> Students[i].name
		
			,'\n';
		cout << "Enter the ID of student" << (i+1) << " ";
		cin >> Students[i].id , '\n';
		cout << "Enter the grade of student" <<  (i+1) << " ";
		cin >> Students[i].grade , '\n';
		cout << "\n";
	}
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			if (Students[i].grade < Students[j].grade)
			{
				temp = Students[i];
				Students[i] = Students[j];
				Students[j] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << Students[i].name << " ";
		cout << Students[i].grade << " ";
		cout << Students[i].id << " ";
		cout << "\n";
	}
}