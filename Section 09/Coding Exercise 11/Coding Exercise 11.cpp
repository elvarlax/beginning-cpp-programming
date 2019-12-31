/*
 * Coding Exercise #11 - If-Else Statement - Can you Drive?
 * In this exercise you will use an simple if/else statement to decide if someone can drive.
 * Let's assume that anyone 16 or older can legally drive.
 * If the person can legally drive, your program should display, "Yes - you can drive!" using a cout statement.
 * You do not have to provide a '\n' or endl.
 * If the person cannot legally drive, then your program should display, "Sorry, come back in n years",
 * where n is how many years until the person turns 16 year old.
 */
#include <iostream>
using namespace std;

void can_you_drive(int age)
{
	if (age >= 16)
	{
		cout << "Yes - you can drive!";
	}
	else
	{
		cout << "Sorry, come back in " << 16 - age << " years";
	}
}

int main()
{
	can_you_drive(15);
	can_you_drive(16);
	return 0;
}