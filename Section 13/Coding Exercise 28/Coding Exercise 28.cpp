/*
 * Coding Exercise #28 - Creating and Accessing Objects
 * In the test_dog function create a Dog object named spot and, using the . operator, 
 * set the name attribute to the string "Spot" and the age attribute to 5.
 */
#include "Dog.h"
#include <iostream>
using namespace std;

Dog test_dog() 
{
    Dog spot;
    spot.name = "Spot";
    spot.age = 5;
    return spot;
}

int main() 
{
    cout << "Name: " << test_dog().name << endl;
    cout << "Age: " << test_dog().age << endl;
    return 0;
}