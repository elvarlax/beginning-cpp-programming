#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H

#include <iostream>
#include <ostream>
using namespace std;

class Money {
	int dollars;
	int cents;
public:
	Money(int dollars, int cents);
	Money(int total);
	friend ostream& operator<<(ostream& out, const Money& money);
};

#endif //_MONEY_MONEY_H
