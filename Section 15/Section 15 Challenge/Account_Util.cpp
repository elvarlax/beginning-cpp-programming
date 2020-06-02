#include "Account_Util.h"

// Helper functions for Account class

// Displays Account objects in a vector of Account objects
void display(const vector<Account>& accounts) {
	cout << "\n=== Accounts ==================================================================" << endl;
	for (const auto& account : accounts) {
		cout << account << endl;
	}
}

// Deposits supplied amount to each Account object in the vector
void deposit(vector<Account>& accounts, double amount) {
	cout << "\n=== Depositing to Accounts ====================================================" << endl;
	for (auto& account : accounts) {
		if (account.deposit(amount)) {
			cout << "Deposited " << amount << " to " << account << endl;
		}
		else {
			cout << "Failed Deposit of " << amount << " to " << account << endl;
		}
	}
}

// Withdraw amount from each Account object in the vector
void withdraw(vector<Account>& accounts, double amount) {
	cout << "\n=== Withdrawing from Accounts =================================================" << endl;
	for (auto& account : accounts) {
		if (account.withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << account << endl;
		}
		else {
			cout << "Failed Withdrawal of " << amount << " from " << account << endl;
		}
	}
}

// Helper functions for Savings Account class

// Displays Savings Account objects in a vector of Savings Account objects
void display(const vector<Savings_Account>& accounts) {
	cout << "\n=== Savings Account ===========================================================" << endl;
	for (const auto& account : accounts) {
		cout << account << endl;
	}
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit(vector<Savings_Account>& accounts, double amount) {
	cout << "\n=== Depositing to Savings Account =============================================" << endl;
	for (auto& account : accounts) {
		if (account.deposit(amount)) {
			cout << "Deposited " << amount << " to " << account << endl;
		}
		else {
			cout << "Failed Deposit of " << amount << " to " << account << endl;
		}
	}
}

// Withdraw amount from each Savings Account object in the vector
void withdraw(vector<Savings_Account>& accounts, double amount) {
	cout << "\n=== Withdrawing from Savings Account ==========================================" << endl;
	for (auto& account : accounts) {
		if (account.withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << account << endl;
		}
		else {
			cout << "Failed Withdrawal of " << amount << " from " << account << endl;
		}
	}
}

// Helper functions for Checking Account class

// Displays Checking Account objects in a vector of Checking Account objects
void display(const vector<Checking_Account>& accounts) {
	cout << "\n=== Checking Account ===========================================================" << endl;
	for (const auto& account : accounts) {
		cout << account << endl;
	}
}

// Deposits supplied amount to each Checking Account object in the vector
void deposit(vector<Checking_Account>& accounts, double amount) {
	cout << "\n=== Depositing to Checking Account =============================================" << endl;
	for (auto& account : accounts) {
		if (account.deposit(amount)) {
			cout << "Deposited " << amount << " to " << account << endl;
		}
		else {
			cout << "Failed Deposit of " << amount << " to " << account << endl;
		}
	}
}

// Withdraw amount from each Checking Account object in the vector
void withdraw(vector<Checking_Account>& accounts, double amount) {
	cout << "\n=== Withdrawing from Checking Account ==========================================" << endl;
	for (auto& account : accounts) {
		if (account.withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << account << endl;
		}
		else {
			cout << "Failed Withdrawal of " << amount << " from " << account << endl;
		}
	}
}

// Helper functions for Trust Account class

// Displays Trust Account objects in a vector of Trust Account objects
void display(const vector<Trust_Account>& accounts) {
	cout << "\n=== Trust Account ===========================================================" << endl;
	for (const auto& account : accounts) {
		cout << account << endl;
	}
}

// Deposits supplied amount to each Trust Account object in the vector
void deposit(vector<Trust_Account>& accounts, double amount) {
	cout << "\n=== Depositing to Trust Account =============================================" << endl;
	for (auto& account : accounts) {
		if (account.deposit(amount)) {
			cout << "Deposited " << amount << " to " << account << endl;
		}
		else {
			cout << "Failed Deposit of " << amount << " to " << account << endl;
		}
	}
}

// Withdraw amount from each Trust Account object in the vector
void withdraw(vector<Trust_Account>& accounts, double amount) {
	cout << "\n=== Withdrawing from Trust Account ==========================================" << endl;
	for (auto& account : accounts) {
		if (account.withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << account << endl;
		}
		else {
			cout << "Failed Withdrawal of " << amount << " from " << account << endl;
		}
	}
}