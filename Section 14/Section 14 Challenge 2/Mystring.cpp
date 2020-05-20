#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
	: str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char* s)
	: str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		size_t str_size = strlen(s) + 1;
		str = new char[str_size];
		strcpy_s(str, str_size, s);
	}
}

// Copy constructor
Mystring::Mystring(const Mystring& source)
	: str(nullptr) {
	size_t str_size = strlen(source.str) + 1;
	str = new char[str_size];
	strcpy_s(str, str_size, source.str);
}

// Move constructor
Mystring::Mystring(Mystring&& source)
	: str(source.str) {
	source.str = nullptr;
}

// Destructor
Mystring::~Mystring() {
	delete[] str;
}

// Copy assignment
Mystring& Mystring::operator=(const Mystring& rhs) {
	if (this == &rhs) {
		return *this;
	}
	delete[] str;
	size_t str_size = strlen(rhs.str) + 1;
	str = new char[str_size];
	strcpy_s(str, str_size, rhs.str);
	return *this;
}

// Move assignment
Mystring& Mystring::operator=(Mystring&& rhs) {
	if (this == &rhs) {
		return *this;
	}
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

// Display method
void Mystring::display() const {
	cout << str << " : " << get_length() << endl;
}

// Getters
int Mystring::get_length() const { return strlen(str); }
const char* Mystring::get_str() const { return str; }

// Make lowercase
Mystring operator-(const Mystring& obj) {
	size_t str_size = strlen(obj.str) + 1;
	char* buff = new char[str_size];
	strcpy_s(buff, str_size, obj.str);

	for (size_t i = 0; i < strlen(buff); i++) {
		buff[i] = tolower(buff[i]);
	}

	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

// Concatenate
Mystring operator+(const Mystring& lhs, const Mystring& rhs) {
	size_t str_size = strlen(lhs.str) + strlen(rhs.str) + 1;
	char* buff = new char[str_size];
	strcpy_s(buff, str_size, lhs.str);
	strcat_s(buff, str_size, rhs.str);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

// Equals
bool operator==(const Mystring& lhs, const Mystring& rhs) {
	return strcmp(lhs.str, rhs.str) == 0;
}

// Not equals
bool operator!=(const Mystring& lhs, const Mystring& rhs) {
	return strcmp(lhs.str, rhs.str) != 0;
}

// Less than
bool operator<(const Mystring& lhs, const Mystring& rhs) {
	return strcmp(lhs.str, rhs.str) < 0;
}

// Greater than
bool operator>(const Mystring& lhs, const Mystring& rhs) {
	return strcmp(lhs.str, rhs.str) > 0;
}

// Concatenate and assign
Mystring& operator+=(Mystring& lhs, const Mystring& rhs) {
	lhs = lhs + rhs;
	return lhs;
}

// Repeat n times
Mystring operator*(const Mystring& lhs, int n) {
	Mystring temp;
	for (int i = 1; i <= n; i++) {
		temp = temp + lhs;
	}
	return temp;
}

// Repeat and assign
Mystring& operator*=(Mystring& lhs, int n) {
	lhs = lhs * n;
	return lhs;
}

// Make uppercase - pre-increment
Mystring& operator++(Mystring& obj) {
	for (size_t i = 0; i < strlen(obj.str); i++) {
		obj.str[i] = toupper(obj.str[i]);
	}
	return obj;
}

// Make uppercase - post-increment
Mystring operator++(Mystring& obj, int)
{
	Mystring temp{ obj };
	++obj;
	return temp;
}

ostream& operator<<(ostream& os, Mystring& rhs) {
	return os << rhs.str;
}

istream& operator>>(istream& in, Mystring& rhs) {
	char* buff = new char[1000];
	in >> buff;
	rhs = Mystring{ buff };
	delete[] buff;
	return in;
}