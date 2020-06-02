#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>
using namespace std;

class Account {
	friend ostream& operator<<(ostream& os, const Account& account);
private:
	static constexpr const char* def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
protected:
	string name;
	double balance;
public:
	Account(string name = def_name, double balance = def_balance);
	bool deposit(double amount);
	bool withdraw(double amount);
	double get_balance() const;
};

#endif // _ACCOUNT_H_