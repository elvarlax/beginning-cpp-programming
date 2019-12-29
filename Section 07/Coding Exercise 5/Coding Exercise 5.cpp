/*
 * Coding Exercise #5 - Declaring, Initializing and Accessing an Array
 * Declare an array of 10 integers named arr and initialize the array so that all 10 integers are 0.
 * Then assign 100 to the first element of the array and 1000 to the last element of the array.
*/
#include <vector>
#include <iostream>
using namespace std;

vector<int> use_array()
{
	int arr[10]{};
	arr[0] = 100;
	arr[9] = 1000;
	
	vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
	return v;
}

int main()
{
	for (auto i : use_array())
	{
		cout << i << endl;
	}
	return 0;
}
