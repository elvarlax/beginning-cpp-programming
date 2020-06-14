#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>

#include "Account.h"

// Utility helper functions for Account class

void display(const vector<Account*>& accounts);
void deposit(vector<Account*>& accounts, double amount);
void withdraw(vector<Account*>& accounts, double amount);

#endif // _ACCOUNT_UTIL_H_