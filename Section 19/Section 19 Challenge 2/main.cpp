/*
 * Section 19 Challenge 2 - Automated Grader
 * =========================================
 * Write a program that reads a file named responses.txt that contains the answer key for a quiz
 * as well as student responses for the quiz.
 *
 * The answer key is the first item in the file.
 * Student1 name
 * Student1 responses
 * Student2 name
 * Student2 responses
 * Student3 name
 * Student3 responses
 * ...
 *
 * Here is a sample file.
 *
 * ABCDE
 * Frank
 * ABCDE
 * Larry
 * ABCAC
 * Moe
 * BBCDE
 * Curly
 * BBAAE
 * Michael
 * BBCDE
 *
 * You should read the file and display:
 * Each student's name and score (#correct out of 5)
 * At the end, the class average should be displayed
 * You may assume that the data in the file is properly formatted.
 *
 * Program should output to the console the following:
 * Student          Score
 * ----------------------
 * Frank                5
 * Larry                3
 * Moe                  4
 * Curly                2
 * Michael              4
 * ----------------------
 * Average score      3.6
 */
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ifstream in_file;
	string key{};
	string name{};
	string response{};
	int num_students{};
	int sum{};

	in_file.open("responses.txt");

	if (!in_file) {
		cerr << "Error opening file" << endl;
		return 1;
	}

	in_file >> key;

	cout << setw(10) << left << "Student" << setw(10) << right << "Score" << endl;
	cout << setw(20) << setfill('-') << "" << endl << setfill(' ');

	while (in_file >> name >> response) {
		num_students++;
		int score{ 0 };
		for (int i = 0; i < key.size(); i++) {
			if (response[i] == key[i]) {
				score++;
			}
		}
		sum += score;
		cout << setw(10) << left << name << setw(10) << right << score << endl;
	}

	if (num_students != 0) {
		cout << setprecision(1) << fixed;
		cout << setw(20) << setfill('-') << "" << endl << setfill(' ');
		cout << left << setw(15) << "Average score " << setw(5) << right << static_cast<double>(sum) / num_students << endl;
	}

	in_file.close();
}