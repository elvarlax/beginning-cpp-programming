/*
 * Coding Exercise #4 - Declaring and Initializing Variables
 * In this exercise you will write code that creates a profile for a new employee at a company.
 * 
 * You must declare a total of THREE variables, each of a different type, to represent the employee's name, age, and hourly_wage.
 *
 * age should be an int
 * hourly_wage should be a double, and
 * name should be a string
 *
 * You must initialize the hourly_wage to 23.50. In order to set the values for name and age you must use cin and the extraction
 * operator >> to allow the employee to enter their name and age in that order separated by a single space.
 */
#include <iostream>
#include <string>
using namespace std;

void employee_profile() {
	int age;
	double hourly_wage{23.50};
	string name;
	cin >> name >> age;
	cout << name << " " << age << " " << hourly_wage;
}

int main() {
	employee_profile();
	return 0;
}