#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
	string name;
	int age;
public:
	Dog(string n, int a) { name = n; age = a; };
	string get_name() { return name; }
	void set_name(string n) { name = n; }
	int get_age() { return age; }
	void set_age(int a) { age = a; }
	int get_dog_years() { return age * 7; }
	string speak() { return "Woof"; }
};

#endif