/*
 * Coding Exercise #37 - Reading a text file
 * Please complete the code in the function read_file.
 *
 * This file will be passed to the function by the test harness.
 *
 * Try to open the filename supplied for reading and read each word from the file and display it to cout followed by a std::endl
 * Be sure to test to see if the file was opened successfully.
 *
 * If the file cannot be opened, please display "Error opening file" to std::cerr followed by std::endl
 */
#include <iostream>
#include <fstream>
using namespace std;

void read_file(string file_name) {
	ifstream in_file;
	in_file.open(file_name);

	if (!in_file) {
		cerr << "Error opening file" << endl;
	}

	string line{};

	while (in_file >> line) {
		cout << line << endl;
	}

	in_file.close();
}

int main() {
	read_file("data.txt");
}