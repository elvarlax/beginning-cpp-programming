/*
 * Coding Exercise #2 - Using cout and the insertion operator
 * In this exercise you will write a statement using cout
 * and the insertion operator << to display how many dogs Sally has.
 * The variable x represents the number of dogs.
 * x has already been declared and initialized for you.
 * The output should read "Sally has 3 dogs.".
 */
#include <iostream>
using namespace std;

void sallys_dogs()
{
	int x{3};
	cout << "Sally has " << x << " dogs.";
}

int main()
{
	sallys_dogs();
	return 0;
}
