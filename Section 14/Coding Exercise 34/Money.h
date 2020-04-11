#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H

#include <iostream>

class Money {
	int dollars;
	int cents;
public:
	Money(int dollars, int cents);
	Money(int total);
	bool operator==(const Money& rhs) const;
	bool operator!=(const Money& rhs) const;
};

#endif //_MONEY_MONEY_H