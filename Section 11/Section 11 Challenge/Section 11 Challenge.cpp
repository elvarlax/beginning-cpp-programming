/*
 * Section 11 Challenge
 * ====================
 * Recall the challenge from Section 9 below.
 * Your challenge for section 11 is to modularize your solution to the Section 9
 * challenge by refactoring your solution so that it uses functions.
 *
 * You decide how to modularize the program.
 * You can use my solution which is included in this file, or modularize your solution.
 *
 * Here are a few hints:
 * - Create functions for each major function
 * - Keep the functions small
 * - Remember the Boss/Worker analogy
 * - Keep the vector declaration in the main function and pass the
 *   vector object to any function that requires it.
 *
 * DO NOT move the vector object outside main and make it a global variable.
 *
 * - You can start by defining a function that displays the menu
 * - You can then define a function that reads the selection from the user and returns it in uppercase
 * - Create functions for each menu option
 * - Create functions that display the list of numbers, calculates the mean and so forth
 *
 * Take it one function at a time and take your time.
 * If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
 *
 * Finally, don't forgeto use function prototypes!
 *
 * Good lock -- I know you can do it!
 */
#include <vector>
#include <iostream>
using namespace std;

void displayMenu();
char getChoice();
void printNumbers(const vector<int>& vec);
void addNumber(vector<int>& vec);
void displayMean(const vector<int>& vec);
void displaySmallest(const vector<int>& vec);
void displayLargest(const vector<int>& vec);
void getNumbers(const vector<int>& v);
void getMean(const vector<int>& v);
void getSmallest(const vector<int>& v);
void getLargest(const vector<int>& v);
bool find(const vector<int>& v, int target);
void quit();
void unknown();

void displayMenu() {
	cout << "\nP - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "F - Find a number" << endl;
	cout << "Q - Quit" << endl;
	cout << "\nEnter your choice: ";
}

char getChoice() {
	char choice{};
	cin >> choice;
	return toupper(choice);
}

void printNumbers(const vector<int>& v) {
	if (v.empty())
	{
		cout << "[] - the list is empty" << endl;
	}
	else
	{
		getNumbers(v);
	}
}

void addNumber(vector<int>& v) {
	int input{};
	cout << "Add a number: ";
	cin >> input;
	v.push_back(input);
	cout << input << " added" << endl;
}

void displayMean(const vector<int>& v) {
	if (v.empty())
	{
		cout << "Unable to calculate the mean - no data" << endl;
	}
	else
	{
		getMean(v);
	}
}

void displaySmallest(const vector<int>& v) {
	if (v.empty())
	{
		cout << "Unable to determine the smallest number - list is empty" << endl;
	}
	else
	{
		getSmallest(v);
	}
}

void displayLargest(const vector<int>& v) {
	if (v.empty())
	{
		cout << "Unable to determine the largest number - list is empty" << endl;
	}
	else
	{
		getLargest(v);
	}
}

void findNumber(const vector<int>& v) {
	int target{};
	cout << "Enter the number to find: ";
	cin >> target;
	if (find(v, target)) {
		cout << target << " was found" << endl;
	}
	else
	{
		cout << target << " was not found";
	}
}

void getNumbers(const vector<int>& v)
{
	cout << "[ ";
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << "]";
}

void getMean(const vector<int>& v)
{
	int sum{};
	for (int i : v)
	{
		sum += i;
	}
	cout << "The mean is " << sum / v.size() << endl;
}

void getSmallest(const vector<int>& v)
{
	int min = v.at(0);
	for (int i : v)
	{
		if (i < min)
		{
			min = i;
		}
	}
	cout << "The smallest number is " << min << endl;
}

void getLargest(const vector<int>& v)
{
	int max = v.at(0);
	for (int i : v)
	{
		if (i > max)
		{
			max = i;
		}
	}
	cout << "The largest number is " << max << endl;
}

bool find(const vector<int>& v, int target)
{
	for (auto i : v)
	{
		if (i == target)
		{
			return true;
		}
	}
	return false;
}

void quit() {
	cout << "Goodbye" << endl;
}

void unknown() {
	cout << "Unknown selection, please try again" << endl;
}

int main()
{
	vector<int> numbers{};
	char choice{};

	do
	{
		displayMenu();
		choice = getChoice();

		switch (choice) {
		case 'P':
			printNumbers(numbers);
			break;
		case 'A':
			addNumber(numbers);
			break;
		case 'M':
			displayMean(numbers);
			break;
		case 'S':
			displaySmallest(numbers);
			break;
		case 'L':
			displayLargest(numbers);
			break;
		case 'F':
			findNumber(numbers);
			break;
		case 'Q':
			quit();
			break;
		default:
			unknown();
		}
	} while (choice != 'Q');
	cout << endl;
	return 0;
}