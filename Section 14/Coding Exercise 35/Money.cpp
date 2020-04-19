#include "Money.h"

Money::Money(int dollars, int cents) : dollars{ dollars }, cents{ cents } {}

Money::Money(int total) : dollars{ total / 100 }, cents{ total % 100 }  {}

Money operator+(const Money& lhs, const Money& rhs) {
	int total = (lhs.dollars + rhs.dollars) * 100 + lhs.cents + rhs.cents;
	return Money(total);
}