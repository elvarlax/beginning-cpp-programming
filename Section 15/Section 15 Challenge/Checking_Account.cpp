#include "Checking_Account.h"

Checking_Account::Checking_Account(string name, double balance)
	: Account(name, balance) {
}

// Withdraw:
//   Every withdrawal transaction will be assessed this flat fee.
bool Checking_Account::withdraw(double amount) {
	amount += flat_fee;
	return Account::withdraw(amount);
}

ostream& operator<<(ostream& os, const Checking_Account& account) {
	return os << "[Checking Account: " << account.name << ": " << account.balance << "]";
}