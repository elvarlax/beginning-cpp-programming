/*
 * Coding Exercise #29 - Adding public methods that access private class attributes
 * Given the following Dog class in Dog.h add the following public getter and setter methods 
 * that get and set each class attribute as follows:
 * get_name returns the name attribute of the dog.
 * set_name sets the name attribute of the dog to the string that is passed in to the method.
 * get_age returns the age attribute of the dog.
 * set_age sets the age attribute of the dog to the int passed in to the method.
 */
#include <iostream>
#include "Dog.h"

int main()
{
    Dog dog;
    dog.set_name("Buddy");
    dog.set_age(5);
    cout << "Dog name: " << dog.get_name() << endl;
    cout << "Dog age: " << dog.get_age() << endl;
}