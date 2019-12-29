/*
 * Coding Exercise #6 - Declaring, Initializing and Accessing Vectors
 * Declare a vector of integers named vec and initialize the vector to 10, 20, 30, 40, and 50.
 * Then set the first element of the vector to 100 and the last element to the vector to 1000.
*/
#include <vector>
#include <iostream>
using namespace std;

vector<int> use_vector()
{
	vector<int> vec{10, 20, 30, 40, 50};
	vec.at(0) = 100;
	vec.at(4) = 1000;
	
	return vec;
}

int main()
{
	for (auto i : use_vector())
	{
		cout << i << endl;
	}
	return 0;
}
