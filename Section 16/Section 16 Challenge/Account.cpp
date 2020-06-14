#include "Account.h"

Account::Account(string name, double balance)
	: name{ name }, balance{ balance } {
}

bool Account::deposit(double amount) {
	if (amount < 0) {
		return false;
	}
	else {
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if (balance - amount >= 0) {
		balance -= amount;
		return true;
	}
	else {
		return false;
	}
}

void Account::print(ostream& os) const {
	os.precision(2);
	os << fixed;
	os << "[Account: " << name << ": " << balance << "]";
}

double Account::get_balance() const {
	return balance;
}