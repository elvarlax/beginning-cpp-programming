/*
 * Coding Exercise #17 - Nested Loops - Sum of the Product of all Pairs of Vector Elements
 * Given a vector of integers named vec that is provided for you, find the sum of the product of all pairs of vector elements.
 * You should declare an integer variable named result and store the final product in this variable.
 *
 * For example, given the vector vec to be {1, 2, 3}, the possible pairs are (1,2), (1,3), and (2,3).
 * So the result would be (1*2) + (1*3) + (2*3) which is 11.
 *
 * Another example:
 * Given the vector vec to be {2, 3, 6, 8}, the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8).
 * So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140.
 *
 * If the vector is empty or has 1 element then result should be 0.
 */
#include <vector>
#include <iostream>
using namespace std;

int calculate_pairs(vector<int> vec)
{
	int result{};

	for (auto i = 0; i < vec.size(); i++)
	{
		for (auto j = i + 1; j < vec.size(); j++)
		{
			result += vec.at(i) * vec.at(j);
		}
	}
	return result;
}

int main()
{
	cout << calculate_pairs({1, 2, 3}) << endl;
	cout << calculate_pairs({2, 4, 6, 8}) << endl;
	cout << calculate_pairs({1}) << endl;
	cout << calculate_pairs({}) << endl;
	return 0;
}
