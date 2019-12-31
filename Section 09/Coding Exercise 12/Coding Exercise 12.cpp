/*
 * Coding Exercise #12 - Nested If Statements - Can you Drive?
 * In this exercise you use nested if statements to decide if someone can drive.
 * Let's assume that anyone 16 or older can legally drive, but they must also own a car to drive.
 * 
 * If the person is not 16 or older then you should display,
 * "Sorry, come back in n years and be sure you own a car when you come back.",
 * where n is how many years until the person turns 16 years old.
 * 
 * If the person is 16 or older but they do NOT own a car, then your program should display,
 * "Sorry, you need to buy a care before you can drive!".
 * 
 * If the person is 16 or older and they DO own a car, then your program should display, "Yes - you can drive!".
 * The age will be provided for you, you do NOT need to declare age.
 * 
 * We will also automatically provide a boolean variable named has_car which will be true if the person owns a car or false otherwise.
 * Our test cases will provide different values of age and has_car to test your code.
 */
#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car)
{
	if (age >= 16)
	{
		if (has_car)
		{
			cout << "Yes - you can drive!";
		}
		else
		{
			cout << "Sorry, you need to buy a car before you can drive!";
		}
	}
	else
	{
		cout << "Sorry, come back in " << 16 - age << " years and be sure you own a car when you come back.";
	}
}

int main()
{
	can_you_drive(15, true);
	can_you_drive(16, true);
	can_you_drive(16, false);
	return 0;
}
