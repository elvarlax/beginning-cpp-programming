/*
 * Section 15 Challenge
 * ====================
 * You are provided with a simple Account class hierarchy that contains
 * Account - Base class
 * Saving Account - Derived class
 *
 * An Account has a name and a balance.
 * A Savings Account is an Account and adds an interest rate.
 *
 * I have also provided some Account helper functions in Account_Util.h and Account_Util.cpp
 * that made it easy to display, deposit to, and withdraw from a vector of Accounts and Savings Accounts.
 *
 * Please refer to the source code provided and the video explanation of this challenge for more details.
 *
 * Your challenge is the following:
 *
 * 1. Add a Checking account class to the Account hierarchy
 *    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
 *    Every withdrawal transaction will be assessed this flat fee.
 *
 * 2. Add a Trust account class to the Account hierarchy
 *    A Trust account has a name, a balance, and an interest rate
 *    The Trust account deposit works just like a savings account deposit.
 *    However, any deposits of $5000.00 or more will recieve a $50.00 bonus deposited to the account.
 *
 *    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
 *    You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)
 *
 *    Hints:
 *       Reuse existing functionality!!
 *       Think about what the Base class will be for the new classes.
 *       Add helper functions to Account_Util.h and Account_Util.cpp if you wish to work with your new classes.
 *       (You don't have to, but it will make your main much easier to use)
 *
 *    Have fun!! You are no longer beginner C++ programmers!
 *
 *    If you want more practice with operator overloading you can overload += and -= for deposit and withdrawal :)
 */
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
using namespace std;

int main() {
	cout.precision(2);
	cout << fixed;

	// Accounts
	vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{ "Larry" });
	accounts.push_back(Account{ "Moe", 2000 });
	accounts.push_back(Account{ "Curly", 5000 });

	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);

	// Savings
	vector<Savings_Account> sav_accounts;
	sav_accounts.push_back(Savings_Account{});
	sav_accounts.push_back(Savings_Account{ "Superman" });
	sav_accounts.push_back(Savings_Account{ "Batman", 2000 });
	sav_accounts.push_back(Savings_Account{ "Wonderwoman", 5000, 5.0 });

	display(sav_accounts);
	deposit(sav_accounts, 1000);
	withdraw(sav_accounts, 2000);

	// Checking Account
	vector<Checking_Account> check_accounts;
	check_accounts.push_back(Checking_Account{});
	check_accounts.push_back(Checking_Account{ "Alice" });
	check_accounts.push_back(Checking_Account{ "Bob", 2000 });
	check_accounts.push_back(Checking_Account{ "Charlie", 5000 });

	display(check_accounts);
	deposit(check_accounts, 1000);
	withdraw(check_accounts, 2000);

	// Trust Account
	vector<Trust_Account> trust_accounts;
	trust_accounts.push_back({});
	trust_accounts.push_back(Trust_Account{ "Jacob" });
	trust_accounts.push_back(Trust_Account{ "Erik", 10000, 5.0 });
	trust_accounts.push_back(Trust_Account{ "Karen", 20000, 4.0 });
	trust_accounts.push_back(Trust_Account{ "Eva", 30000 });

	display(trust_accounts);
	deposit(trust_accounts, 1000);
	withdraw(trust_accounts, 3000);

	for (int i = 1; i <= 5; i++) {
		withdraw(trust_accounts, 1000);
	}

	return 0;
}