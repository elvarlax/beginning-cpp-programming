#include "Money.h"

Money::Money(int dollars, int cents) : dollars{ dollars }, cents{ cents } {}

Money::Money(int total) : dollars{ total / 100 }, cents{ total % 100 }  {}

ostream& operator<<(ostream& out, const Money& money) {
	return out << "dollars: " << money.dollars << " cents: " << money.cents;
}