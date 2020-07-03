/*
 * Section 19 Challenge 4 - Copy Romeo and Juliet with line numbers
 * ================================================================
 * This challenge should be pretty easy.
 * I have provided the text for Romeo and Juliet in a file named romeoandjuliet.txt
 *
 * For this challenge you have to make a copy of the Romeo and Juliet file and save it to another file.
 * This new copy should have line numbers at the beginning of each line in the play.
 * Please format the numbers nicely so everything lines up.
 *
 * Feel free to extend this challenge in any way you like.
 * For example, you may want to provide line numbers only for lines that actually have text.
 *
 * Have fun!
 */
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	ifstream in_file{ "romeoandjuliet.txt" };
	ofstream out_file{ "romeoandjuliet_out.txt" };

	if (!in_file) {
		cerr << "Error opening input file" << endl;
		return 1;
	}

	if (!out_file) {
		cerr << "Error opening output file" << endl;
		return 1;
	}

	string line;
	int line_number{ 0 };

	while (getline(in_file, line)) {
		line_number++;
		out_file << setw(5) << left << line_number << line << endl;
	}

	cout << "Copy complete" << endl;

	in_file.close();
	out_file.close();

	return 0;
}