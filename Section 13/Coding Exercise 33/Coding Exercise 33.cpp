/*
 * Coding Exercise #33 - Add a Copy Constructor to an Existing Class
 * Given the Dog class defined in Dog.h, add a Copy constructor.
 * The copy constructor should copy the attributes from one object to another.
 * Also, please display, "Copy Constructor" to cout in the body of your copy constructor.
 * The copy constructor should allow us to create Dog objects as follows:
 * Dog spot {"Spot", 5};
 * Dog twin {spot};
 */
#include "Dog.h"

int main()
{
	Dog spot{ "Spot", 5 };
	Dog twin{ spot };
}