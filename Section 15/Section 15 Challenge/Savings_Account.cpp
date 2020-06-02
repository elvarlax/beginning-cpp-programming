#include "Savings_Account.h"

Savings_Account::Savings_Account(string name, double balance, double int_rate)
	: Account{ name, balance }, int_rate{ int_rate } {
}

// Deposit:
//   Amount supplied to deposit will be incremented by (amount * int_rate / 100)
//   and then the updated amount will be deposited
bool Savings_Account::deposit(double amount) {
	amount += amount * (int_rate / 100);
	return Account::deposit(amount);
}

ostream& operator<<(ostream& os, const Savings_Account& account) {
	return os << "[Savings Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
}