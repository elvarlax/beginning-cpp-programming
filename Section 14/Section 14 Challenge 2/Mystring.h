#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
using namespace std;

class Mystring {
	// Overloaded non-operator member methods
	friend Mystring operator-(const Mystring& obj);                      // Make lowercase
	friend Mystring operator+(const Mystring& lhs, const Mystring& rhs); // Concatenate
	friend bool operator==(const Mystring& lhs, const Mystring& rhs);    // Equals
	friend bool operator!=(const Mystring& lhs, const Mystring& rhs);    // Not equals
	friend bool operator<(const Mystring& lhs, const Mystring& rhs);     // Less than
	friend bool operator>(const Mystring& lhs, const Mystring& rhs);     // Greater than
	friend Mystring& operator+=(Mystring& lhs, const Mystring& rhs);     // Concatenate and assign
	friend Mystring operator*(const Mystring& lhs, int n);               // Repeat n times
	friend Mystring& operator*=(Mystring& lhs, int n);                   // Repeat and assign
	friend Mystring& operator++(Mystring& obj);                          // Make uppercase - pre-increment
	friend Mystring operator++(Mystring& obj, int);                      // Make uppercase - post-increment
	friend ostream& operator<<(ostream& os, Mystring& rhs);
	friend istream& operator>>(istream& in, Mystring& rhs);
private:
	char* str;                                // Pointer to a char[] that holds a C-style string
public:
	Mystring();	                              // No-args constructor
	Mystring(const char* s);                  // Overloaded constructor
	Mystring(const Mystring& source);         // Copy constructor
	Mystring(Mystring&& source);              // Move constructor
	~Mystring();                              // Destructor

	Mystring& operator=(const Mystring& rhs); // Copy assignment
	Mystring& operator=(Mystring&& rhs);      // Move assignment

	void display() const;                     // Display method

	int get_length() const;                   // Getters
	const char* get_str() const;
};

#endif // _MYSTRING_H_