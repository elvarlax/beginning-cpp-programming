#ifndef _ILLEGAL_BALANCE_EXCEPTION_H_
#define _ILLEGAL_BALANCE_EXCEPTION_H_

class IllegalBalanceException : public exception {
public:
	IllegalBalanceException() noexcept = default;
	~IllegalBalanceException() = default;
	virtual const char* what() const noexcept {
		return "Illegal balance exception";
	}
};

#endif // _ILLEGAL_BALANCE_EXCEPTION_H_