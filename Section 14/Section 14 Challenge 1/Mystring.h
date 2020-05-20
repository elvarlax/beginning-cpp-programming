#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
using namespace std;

class Mystring {
	friend ostream& operator<<(ostream& os, const Mystring& rhs);
	friend istream& operator>>(istream& in, Mystring& rhs);
private:
	char* str;                                     // Pointer to a char[] that holds a C-style string
public:
	Mystring();                                    // No-args constructor
	Mystring(const char* s);                       // Overloaded constructor
	Mystring(const Mystring& source);              // Copy constructor
	Mystring(Mystring&& source);                   // Move constructor
	~Mystring();                                   // Destructor

	Mystring& operator=(const Mystring& rhs);      // Copy assignment
	Mystring& operator=(Mystring&& rhs);           // Move assignment

	void display() const;                          // Display method

	int get_length() const;                        // Getters
	const char* get_str() const;

	// Overloaded operator member methods
	Mystring operator-();                          // Make lowercase
	Mystring operator+(const Mystring& rhs) const; // Concatenate
	bool operator==(const Mystring& rhs) const;    // Equals
	bool operator!=(const Mystring& rhs) const;    // Not equals
	bool operator<(const Mystring& rhs) const;     // Less than
	bool operator>(const Mystring& rhs) const;     // Greater than
	Mystring& operator+=(const Mystring& rhs);     // Concatenate and assign
	Mystring operator*(int n) const;               // Repeat n times
	Mystring& operator*=(int n);                   // Repeat and assign
	Mystring& operator++();                        // Make uppercase - pre-increment
	Mystring& operator++(int);                     // Make uppercase - post-increment
};

#endif // _MYSTRING_H_