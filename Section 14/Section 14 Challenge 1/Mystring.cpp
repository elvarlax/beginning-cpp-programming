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
Mystring Mystring::operator-() {
	size_t str_size = strlen(str) + 1;
	char* buff = new char[str_size];
	strcpy_s(buff, str_size, str);

	for (size_t i = 0; i < strlen(buff); i++) {
		buff[i] = tolower(buff[i]);
	}

	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

// Equals
bool Mystring::operator==(const Mystring& rhs) const {
	return strcmp(str, rhs.str) == 0;
}

// Not equals
bool Mystring::operator!=(const Mystring& rhs) const {
	return strcmp(str, rhs.str) != 0;
}

// Less than
bool Mystring::operator<(const Mystring& rhs) const {
	return strcmp(str, rhs.str) < 0;
}

// Greater than
bool Mystring::operator>(const Mystring& rhs) const {
	return strcmp(str, rhs.str) > 0;
}

// Concatenate
Mystring Mystring::operator+(const Mystring& rhs) const {
	size_t str_cat_size = strlen(str) + strlen(rhs.str) + 1;
	char* buff = new char[str_cat_size];
	strcpy_s(buff, str_cat_size, str);
	strcat_s(buff, str_cat_size, rhs.str);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

// Concatenate and assign
Mystring& Mystring::operator+=(const Mystring& rhs) {
	*this = *this + rhs;
	return *this;
}

// Repeat n times
Mystring Mystring::operator*(int n) const {
	Mystring temp;
	for (int i = 1; i <= n; i++) {
		temp = temp + *this;
	}
	return temp;
}

// Repeat and assign
Mystring& Mystring::operator*=(int n) {
	*this = *this * n;
	return *this;
}

// Make uppercase - pre-increment
Mystring& Mystring::operator++() {
	for (size_t i = 0; i < strlen(str); i++) {
		str[i] = toupper(str[i]);
	}
	return *this;
}

// Make uppercase - post-increment
Mystring& Mystring::operator++(int) {
	Mystring temp(*this);
	operator++();
	return temp;
}

ostream& operator<<(ostream& os, const Mystring& rhs) {
	return os << rhs.str;
}

istream& operator>>(istream& in, Mystring& rhs) {
	char* buff = new char[1000];
	in >> buff;
	rhs = Mystring{ buff };
	delete[] buff;
	return in;
}