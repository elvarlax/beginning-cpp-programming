/*
 * Section 8 Challenge
 * ===================
 * For this program I will be using US dollars and cents.
 *
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 * You may assume that the number of cents entered is greater than or equal to zero
 * The program should then display how to provide that change to the user.
 *
 * In the US:
 *  1 dollar is 100 cents
 *  1 quarter is 25 cents
 *  1 dime is 10 cents
 *  1 nickel is 5 cents, and
 *  1 penny is 1 cent.
 *
 *  Here is a sample run:
 *
 *  Enter an amount in cents: 92
 *
 *  You can provide this change as follows:
 *  dollars:  0
 *  quarters: 3
 *  dimes:    1
 *  nickels:  1
 *  pennies:  2
 *
 *  Feel free to use your own currency system.
 *  Also, think of how you might solve the problem using the modulo operator.
 */
#include <iostream>
using namespace std;

int main()
{
	int dollar{100}, quarter{25}, dime{10}, nickel{5};
	int amount, balance{0}, dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};

	cout << "Enter an amount in cents: ";
	cin >> amount;

	dollars = amount / dollar;
	balance = amount % dollar;

	quarters = balance / quarter;
	balance %= quarter;

	dimes = balance / dime;
	balance %= dime;

	nickels = balance / nickel;
	balance %= nickel;

	pennies = balance;

	cout << "dollars : " << dollars << endl;
	cout << "quarter : " << quarters << endl;
	cout << "dime    : " << dimes << endl;
	cout << "nickel  : " << nickels << endl;
	cout << "penny   : " << pennies << endl;
}
