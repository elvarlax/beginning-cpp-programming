#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "I_Printable.h"

#include <iostream>
#include <string>

using namespace std;

class Account : public I_Printable {
private:
	static constexpr const char* def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
protected:
	string name;
	double balance;
public:
	Account(string name = def_name, double balance = def_balance);
	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	virtual void print(ostream& os) const override;
	double get_balance() const;
	virtual ~Account() = default;
};

#endif // _ACCOUNT_H_