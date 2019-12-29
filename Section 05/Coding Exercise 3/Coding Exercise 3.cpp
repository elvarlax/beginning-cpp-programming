/*
 * Coding Exercise #3 - Using cin and the extraction operator
 * In this exercise you will write code using cin
 * and the extraction operator >> to allow a user to enter their date of birth.
 * The variable m represents the month, d represents the day, y represents the year.
 * Assume that the user will enter their date of birth in the order of
 * month, day, year, with each value being separated by a white space.
 */
#include <iostream>
using namespace std;

void date_of_birth()
{
	int m{};
	int d{};
	int y{};
	cin >> m >> d >> y;
	cout << m << " " << d << " " << y;
}

int main()
{
	date_of_birth();
	return 0;
}
