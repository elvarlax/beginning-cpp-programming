/*
 * Coding Exercise #30 - Add more public methods to an existing class
 * Given an existing Dog class in Dog.h, add the following public method to the class:
 * get_human_years() return the dog's age * 7.
 * speak() returns the std::string "Woof".
 */
#include <iostream>
#include "Dog.h"

int main()
{
    Dog dog;
    dog.set_age(5);
    cout << "get_human_years(): " << dog.get_human_years() << endl;
    cout << "speak(): " << dog.speak() << endl;
}