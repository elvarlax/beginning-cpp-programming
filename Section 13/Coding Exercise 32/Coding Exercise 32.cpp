/*
 * Coding Exercise #32 - Add an Overloaded Constructor to an Existing Class
 * Given the Dog class defined in Dog.h, add an overloaded constructor that expect a std::string and int as parameters.
 * The constructor should allow us to create Dog objects as follows:
 * Dog fido{ "Fido", 4 };
 * Dog spot{ "Spot", 5 };
 */
#include <iostream>
#include "Dog.h"

int main()
{
	Dog fido{ "Fido", 4 };
	Dog spot{ "Spot", 5 };
	cout << "Dog name: " << fido.get_name() << ", Dog age: " << fido.get_age() << endl;
	cout << "Dog name: " << spot.get_name() << ", Dog age: " << spot.get_age() << endl;
}