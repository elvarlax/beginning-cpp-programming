#include "Trust_Account.h"

Trust_Account::Trust_Account(string name, double balance, double int_rate)
	: Savings_Account(name, balance, int_rate), withdrawals{ 0 } {
}

// Deposit:
//   The Trust account deposit works just like a savings account deposit.
//   However, any deposits of $5000.00 or more will recieve a $50.00 bonus deposited to the account.
bool Trust_Account::deposit(double amount) {
	if (amount >= bonus_threshold) {
		amount += bonus_amount;
	}
	return Savings_Account::deposit(amount);
}

// Withdraw:
//   The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
//   You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)
bool Trust_Account::withdraw(double amount) {
	if (withdrawals >= max_withdrawls || amount > balance * max_withdraw_percent) {
		return false;
	}
	withdrawals++;
	return Savings_Account::withdraw(amount);
}

ostream& operator<<(ostream& os, const Trust_Account& account) {
	return os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, withdrawals: " << account.withdrawals << "]";
}