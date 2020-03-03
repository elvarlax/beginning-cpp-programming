#ifndef __DOG_H__
#define __DOG_H__
#include <string>
#include <iostream>
using namespace std;

class Dog {
private:
	string name;
	int age;
public:
	Dog(string name, int age) : name{ name }, age{ age } { }
	Dog(const Dog& d) : Dog(d.name, d.age) { cout << "Copy Constructor"; }
	string get_name() { return name; }
	void set_name(string n) { name = n; }
	int get_age() { return age; }
	void set_age(int a) { age = a; }
	int get_dog_years() { return age * 7; }
	string speak() { return "Woof"; }
};
#endif