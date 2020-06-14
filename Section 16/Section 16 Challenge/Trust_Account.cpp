#include "Trust_Account.h"

Trust_Account::Trust_Account(string name, double balance, double int_rate)
	: Savings_Account(name, balance, int_rate), withdrawals{ 0 } {
}

bool Trust_Account::deposit(double amount) {
	if (amount >= bonus_threshold) {
		amount += bonus_amount;
	}
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (withdrawals >= max_withdrawls || amount > balance * max_withdraw_percent) {
		return false;
	}
	withdrawals++;
	return Savings_Account::withdraw(amount);
}

void Trust_Account::print(ostream& os) const {
	os.precision(2);
	os << fixed;
	os << "[Trust Account: " << name << ": " << balance << ", " << int_rate << "%, withdrawals: " << withdrawals << "]";
}