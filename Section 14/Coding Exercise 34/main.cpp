/*
 * Coding Exercise #34 - Operator Overloading as Member Functions
 * Given the provided Money class, please add the overloaded equality operators == and !=
 *
 * These overloaded operators should return a bool and should be implemented as member functions.
 *
 * Given 2 Money objects, consider them to be equal if both the dollar and cents attributes are the same for both objects.
 *
 * First, add the overloaded operator function declarations to the Money class declaration in Money.h
 *
 * Second, add the overloaded operator function definitions in Money.cpp
 *
 * These overloaded functions should not modify the objects in any way.
 */
#include <iostream>
#include "Money.h"
using namespace std;

int main() {
	Money money1 = Money(10000);
	Money money2 = Money(10000);
	Money money3 = Money(10000, 500);

	cout << "Money1 == Money2: " << (money1 == money2) << endl;
	cout << "Money1 != Money2: " << (money1 != money2) << endl;
	cout << "Money2 == Money3: " << (money2 == money3) << endl;

	return 0;
}