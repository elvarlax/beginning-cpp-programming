/*
 * Section 9 Challenge
 * ===================
 * This challenge is about using collection (list) of integers and allowing
 * the user to select operations from a menu to perform operations on the list.
 *
 * Your program should display a menu options to the user as follows:
 *
 * P - Print numbers
 * A - Add a number
 * M - Display mean of the numbers
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 *
 * Enter your choice:
 *
 * The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
 * If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be displayed again.
 *
 * If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
 * If the list is empty you should display "[] - the list is empty".
 * If the list is not empty then all the list elements should be displayed inside square brackets separated by a space.
 * For example, [ 1 2 3 4 5 ]
 *
 * If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
 * which you will add to the list and then display it was added.
 * For example, if the user enters 5 you should display, "5 added".
 * Duplicate list entries are OK.
 *
 * If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it.
 * If the list is empty you should display, "Unable to calculate the mean - no data".
 *
 * If the user enters 'S' or 's' you should display the smallest element in the list.
 * For example, if the list contains [ 2 4 5 1 ], you should display, "The smallest number is 1".
 * If the list is empty you should display, "Unable to determine the smallest number - list is empty".
 *
 * If the user enters 'L' or 'l' you should display the largest element in the list.
 * For example, if the list contains [ 2 4 5 1 ], you should display, "The largest number is 5".
 * If the list is empty you should display, "Unable to determine the largest number - list is empty".
 *
 * If the user enters 'Q' or 'q' then you should display 'Goodbye' and the program should terminate.
 *
 * Before you begin. Write out the steps you need to take and decide in what order they should be done.
 * Think about what loops you should use as well as what you will use for your selection logic.
 *
 * This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!
 *
 * Finally, be sure to test your program as you go and at the end.
 *
 * Hint: Use a vector!
 *
 * Additional functionality if you wish to extend this program.
 * 
 * - search for a number in the list and if found display the number of times it occurs in the list
 * - clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
 * - don't allow duplicate entries
 * - come up with your own ideas!
 *
 * Good luck!
 */
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> vec{};
	char choice{};
	int input{};

	while (true)
	{
		cout << "\nP - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "F - Find a number and display how many times it occurs in list" << endl;
		cout << "C - Clear out the list" << endl;
		cout << "Q - Quit" << endl;

		cout << "\nEnter your choice: ";
		cin >> choice;

		if (choice == 'P' || choice == 'p')
		{
			if (vec.empty())
			{
				cout << "[] - the list is empty" << endl;
			}
			else
			{
				cout << "[ ";
				for (int i : vec)
				{
					cout << i << " ";
				}
				cout << "]";
			}
		}
		else if (choice == 'A' || choice == 'a')
		{
			cout << "Add a number: ";
			cin >> input;

			if (!cin.fail())
			{
				vec.push_back(input);
				cout << endl << input << " added" << endl;
			}
			else
			{
				cout << "Please add a number." << endl;
				break;
			}
		}
		else if (choice == 'M' || choice == 'm')
		{
			if (vec.empty())
			{
				cout << "Unable to calculate the mean - no data" << endl;
			}
			else
			{
				int sum{};
				for (int i : vec)
				{
					sum += i;
				}
				cout << "The mean is " << sum / vec.size() << endl;
			}
		}
		else if (choice == 'S' || choice == 's')
		{
			if (vec.empty())
			{
				cout << "Unable to determine the smallest number - list is empty" << endl;
			}
			else
			{
				int min = vec.at(0);
				for (int i : vec)
				{
					if (i < min)
					{
						min = i;
					}
				}
				cout << "The smallest number is " << min << endl;
			}
		}
		else if (choice == 'L' || choice == 'l')
		{
			if (vec.empty())
			{
				cout << "Unable to determine the largest number - list is empty" << endl;
			}
			else
			{
				int max = vec.at(0);
				for (int i : vec)
				{
					if (i > max)
					{
						max = i;
					}
				}
				cout << "The largest number is " << max << endl;
			}
		}
		else if (choice == 'F' || choice == 'f')
		{
			bool found{false};
			int count{0};

			cout << "Number to find: ";
			cin >> input;

			if (!cin.fail())
			{
				for (int i : vec)
				{
					if (i == input)
					{
						count++;
						found = true;
					}
				}

				if (found)
				{
					cout << "Found the number " << count << " times in the list" << endl;
				}
				else
				{
					cout << "Number not found in list!" << endl;
				}
			}
			else
			{
				cout << "Please add a number." << endl;
				break;
			}
		}
		else if (choice == 'C' || choice == 'c')
		{
			vec.clear();
			cout << "The list is clear!" << endl;
		}
		else if (choice == 'Q' || choice == 'q')
		{
			cout << "Goodbye" << endl;
			break;
		}
		else
		{
			cout << "Unknown selection, please try again" << endl;
		}
	}
}
