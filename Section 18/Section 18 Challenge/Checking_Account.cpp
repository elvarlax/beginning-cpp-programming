#include "Checking_Account.h"

Checking_Account::Checking_Account(string name, double balance)
	: Account(name, balance) {
}

bool Checking_Account::deposit(double amount) {
	return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount) {
	amount += flat_fee;
	return Account::withdraw(amount);
}

void Checking_Account::print(ostream& os) const {
	os.precision(2);
	os << fixed;
	os << "[Checking Account: " << name << ": " << balance << "]";
}