/*
 * Section 19 Challenge 3 - Word Finder
 * ====================================
 * Ask the user to enter a word
 * Process the Romeo and Juliet file and determine how many total words there are
 * and how many times the word the user entered appears as a substring of a word in the play.
 *
 * For example.
 * If the user enters: love
 * Then the words love, lovely, and beloved will all be considered matches.
 * You decide whether you want to be case sensitive or not. My solution is case sensitive.
 *
 * Sample are some sample runs:
 *
 * Enter the substring to search for: love
 * 25919 words were searched...
 * The substring love was found 171 times
 *
 * Enter the substring to search for: Romeo
 * 25919 words were searched...
 * The substring Romeo was found 132 times
 *
 * Enter the substring to search for: Juliet
 * 25919 words were searched...
 * The substring Juliet was found 49 times
 *
 * Enter the substring to search for: Frank
 * 25919 words were searched...
 * The substring Frank was found 0 times
 *
 * Have fun!
 */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream in_file;

	in_file.open("romeoandjuliet.txt");

	if (!in_file) {
		cerr << "Error opening file" << endl;
	}

	string word_find{};
	string word_read{};
	int word_counter{ 0 };
	int substring_counter{ 0 };

	cout << "Enter the substring to search for: ";
	cin >> word_find;

	while (in_file >> word_read) {
		word_counter++;
		if (word_read.find(word_find) != string::npos) {
			substring_counter++;
		}
	}

	cout << word_counter << " words were searched..." << endl;
	cout << "The substring " << word_find << " was found " << substring_counter << " times" << endl;

	in_file.close();
}