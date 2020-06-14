#include "Account_Util.h"

// Helper functions for Account class

// Displays Account objects in a vector of Account objects pointers
void display(const vector<Account*>& accounts) {
	cout << "\n=== Accounts ==================================================================" << endl;
	for (const auto account : accounts) {
		cout << *account << endl;
	}
}

// Deposits supplied amount to each Account object in the vector
void deposit(vector<Account*>& accounts, double amount) {
	cout << "\n=== Depositing to Accounts ====================================================" << endl;
	for (auto account : accounts) {
		if (account->deposit(amount)) {
			cout << "Deposited " << amount << " to " << *account << endl;
		}
		else {
			cout << "Failed Deposit of " << amount << " to " << *account << endl;
		}
	}
}

// Withdraw amount from each Account object in the vector
void withdraw(vector<Account*>& accounts, double amount) {
	cout << "\n=== Withdrawing from Accounts =================================================" << endl;
	for (auto account : accounts) {
		if (account->withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << *account << endl;
		}
		else {
			cout << "Failed Withdrawal of " << amount << " from " << *account << endl;
		}
	}
}