#ifndef _INSUFFICENT_FUNDS_EXCEPTION_H_
#define _INSUFFICENT_FUNDS_EXCEPTION_H_

class InsufficentFundsException : public exception {
public:
	InsufficentFundsException() noexcept = default;
	~InsufficentFundsException() = default;
	virtual const char* what() const noexcept {
		return "Insufficent funds exception";
	}
};

#endif // _INSUFFICENT_FUNDS_EXCEPTION_H_