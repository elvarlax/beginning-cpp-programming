/*
 * Section 18 Challenge
 * ====================
 * For this challenge we want to integrate our own user-defined exception classes into the Account class hierarchy.
 *
 * The account classes are provided for you.
 * Also, the IllegalBalanceException.h file contains the declaration for the IllegalBalanceException class.
 *
 * What I would like you to do is:
 * 1. Derive IllegalBalanceException from std::exception and implement the what() method to provide an exception message.
 *    This exception object should be thrown from the Account class constructor is an account object is created with a negative balance.
 *
 * 2. Derive InsufficentFundsException from std::exception and implement the what() method to provide an exception message.
 *    This exception object should be thrown if a withdraw results in a negative balance.
 *    You should throw this exception object from the Account withdraw method.
 *
 * That's it - good luck!
 * Test your code in the main driver.
 *
 * Have fun and experiment!
 */
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficentFundsException.h"
using namespace std;

int main() {
	unique_ptr<Account> moes_account;
	unique_ptr<Account> larrys_account;

	try {
		larrys_account = make_unique<Savings_Account>("Larry", -2000.0);
		cout << *larrys_account << endl;
	}
	catch (const IllegalBalanceException& e) {
		cerr << e.what() << endl;
	}

	try {
		moes_account = make_unique<Savings_Account>("Moe", 1000.0);
		cout << *moes_account << endl;
		moes_account->withdraw(500.0);
		cout << *moes_account << endl;
		moes_account->withdraw(1000.0);
		cout << *moes_account << endl;
	}
	catch (const InsufficentFundsException& e) {
		cerr << e.what() << endl;
	}

	cout << "Program completed successfully" << endl;

	return 0;
}