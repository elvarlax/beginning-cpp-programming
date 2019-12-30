/*
 * Coding Exercise #8 - Using the Arithmetic Operators
 * In this exercise you will write a program that uses arithmetic operators
 * to manipulate an integer number that is provided to you.
 * In order to complete this exercise you will have to update
 * the value contained within the variable number by using the
 * currently contained value as an argument in the statement.
 * 
 * This can be done through the use of the assignment operator = in the following way:
 * E.g. number = number + 4
 * Lets assume that number is currently holding the value 3.
 * This means that the above statement is equivalent to number = 3 + 4.
 * Thereby, through the assignment operator, the new value of number will be 7.
 * 
 * Use the arithmetic operators in the manner and order in which they are listed below.
 * Use the multiplication operator * to double the value of the variable number and store the result back in number.
 * Use the addition operator + to add 9 to the variable number and store the result back in number.
 * Use the subtraction operator - to subtract 3 from the variable number and store the result back in number.
 * Use the division operator / to divide the variable number by 2 and store the result back in number.
 * Use the subtraction operator - to subtract the variable number original_number from the variable number and store the result back in number.
 * Use the modulo operator % to find the remainder of the new value when divided by 3 and store the result back in number.
 */
#include <iostream>
using namespace std;

int arithmetic_operators(int number)
{
	int original_number{number};

	//-- Multiply number by 2 and assign the result back to number
	number *= 2;

	//-- Add 9 to number and assign the result back to number
	number += 9;

	//-- Subtract 3 from number and assign the result back to number
	number -= 3;

	//-- Divide number by 2 and assign the result back to number
	number /= 2;

	//-- Subtract original_number from number and assign the result back to number
	number -= original_number;

	//-- Take the modulus 3 (%) of number and assign it back to number
	number %= 3;

	return number;
}

int main()
{
	cout << arithmetic_operators(3) << endl;
	cout << arithmetic_operators(0) << endl;
	cout << arithmetic_operators(1) << endl;
	cout << arithmetic_operators(1234) << endl;
	cout << arithmetic_operators(-1234) << endl;
	return 0;
}
