#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

/*
 * 1. Add a Checking account class to the Account hierarchy
 *    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
 *    Every withdrawal transaction will be assessed this flat fee.
 */
class Checking_Account : public Account {
	friend ostream& operator<<(ostream& os, const Checking_Account& account);
private:
	static constexpr const char* def_name = "Unnamed Checking Account";
	static constexpr double def_balance = 0.0;
	static constexpr double flat_fee = 1.5;
public:
	Checking_Account(string name = def_name, double balance = def_balance);
	bool withdraw(double amount);
};

#endif // _CHECKING_ACCOUNT_H_