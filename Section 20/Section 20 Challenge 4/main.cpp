/*
 * Section 20 Challenge 4 - Stack and Queue Challenge
 * ==================================================
 * A Palindrome is a string that reads the same backwards or fowards.
 * Simple examples are:
 * madam
 * bob
 * toot
 * radar
 *
 * An entire phrase can be a palindrome, for example:
 * A Toyota's a toyota
 * A Santa at NASA
 * A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!
 *
 * For the purposes of this assignment we will only consider alpha characters and omit all other characters.
 * We will also not be considering case.
 * So,
 * A Santa at Nasa, will be processed as:
 * ASANTAATNASA
 *
 * A common method to solve this problem is to compare the string to its reverse and
 * if they are equal then it must be a palindrome. But we will use a stack and a queue.
 *
 * I am providing the main driver for you which will automatically run several test cases.
 * Your challenge is to write the following function:
 *
 * bool is_palindrome(const std::string &s)
 *
 * This function will expect a string and it must determine if that string is a palindrome
 * and return true if it is, or false if it is not.
 *
 * So,
 *
 * is_palindrome("A Santa at Nasa"); will return true
 * is_palindrome("Hello"); will return false
 *
 * Please use a stack and a queue to solve the problem.
 *
 * If you need a hint, please ask in the Q/A.
 * Good luck and have fun!
 */
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool is_palindrome(const string& s) {
	stack<char> stack;
	queue<char> queue;

	for (char c : s) {
		if (isalpha(c)) {
			c = toupper(c);
			stack.push(c);
			queue.push(c);
		}
	}

	while (!stack.empty()) {
		if (stack.top() != queue.front()) {
			return false;
		}
		stack.pop();
		queue.pop();
	}

	return true;
}

int main() {
	vector<string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
	"avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
	"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

	cout << boolalpha;
	cout << setw(8) << left << "Result" << "String" << endl;
	for (const auto& s : test_strings) {
		cout << setw(8) << left << is_palindrome(s) << s << endl;
	}
	cout << endl;

	return 0;
}