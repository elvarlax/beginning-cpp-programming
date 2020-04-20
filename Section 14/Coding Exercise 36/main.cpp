/*
 * Coding Exercise #36 - Operator Overloading the Stream Insertion Operator
 * Given the provided Money class, please add the overloaded stream insertion << operator
 * so that is displays a Money object on a output stream as follows:
 *
 * If the Money object models 1 dollar and 70 cents, the output should be:
 * Money amount {1, 70};
 * std:cout << amount
 *
 * dollars: 1 cents: 70, no '\n' or endl should be added.
 *
 * This overloaded operator should return a reference to a std::ostream object and should be implemented as a non-member friend function.
 *
 * First, add the overloaded friend operator function declaration to the Money class declaration in Money.h
 *
 * Second, add the overloaded operator function definition in Money.cpp
 *
 * This overloaded operator function should not modify the Money object in any way.
 */
#include <iostream>
#include "Money.h"
using namespace std;

int main()
{
	Money amount {1, 70};
	cout << amount;
}