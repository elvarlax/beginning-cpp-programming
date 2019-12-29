/*
 * Section 7 Challenge
 * ===================
 * Declare 2 empty vectors of integers named vector1 and vector2, respectively.
 *
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display the elements in vector1 using the at() method as well as its size using the size() method
 *
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size using the size() method
 *
 * Declare an empty 2D vector called vector_2d
 * Remember, that 2D vector is a vector of vector<int>
 *
 * Add vector1 to vector_2d dynamically using push_back
 * Add vector2 to vector_2d dynamically using push_back
 *
 * Display the elements in vector_2d using the at() method
 *
 * Change vector1.at(0) to 1000
 *
 * Display the elements in vector_2d again using the at() method
 *
 * Display the elements in vector1
 */
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "vector1:" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "vector1 contains " << vector1.size() << " elements" << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "\nvector2:" << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << "vector2 contains " << vector2.size() << " elements" << endl;

	vector<vector<int>> vector_2d;

	vector_2d.push_back(vector1);

	vector_2d.push_back(vector2);

	cout << "\nvector_2d before:" << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;

	cout << "\nvector_2d after:" << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	cout << "\nvector1:" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "vector1 contains " << vector1.size() << " elements" << endl;
}
