/*
 * Coding Exercise #16 - While loop exercise
 * Given a vector of integers, determine how many integers are present before you see the value -99.
 * Note, it's possible -99 is not in the vector! If -99 is not in the vector
 * then the result will be equal to the number of elements in the vector.
 * The final result should be stored in an integer variable named count.
 * Note that the different vectors will be tested against your code.
 * You do not need to declare the vector of integers.
 * vec is the name of the vector you should use.
 */
#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int>& vec)
{
	int count{0}, i{0};

	while (i < vec.size() && vec.at(i) != -99)
	{
		count++;
		i++;
	}

	return count;
}

int main()
{
	const vector<int> vec{
		1, 3, 5, 15, 16, 17, 18, 19, 20, 21,
		25, 26, 27, -99, 30, 50, 55, 56, 58,
		100, 200, 300, 400, 500, 600, 700
	};
	cout << count_numbers(vec);
	return 0;
}
