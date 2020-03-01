/*
 * Coding Exercise #31 - Add a Default Constructor to an Existing Class
 * Given the Dog class in Dog.h, add a default no-args constructor
 * that initializes the dog's name to "None" and the dog's name to zero.
 */
#include <iostream>
#include "Dog.h"

int main()
{
	Dog dog;
    cout << "Dog name: " << dog.get_name() << endl;
    cout << "Dog age: " << dog.get_age() << endl;
}