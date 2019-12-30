/*
 * Coding Exercise #9 - Logical Operators and Operator Precedence - Can you work?
 * In this exercise you will create a program that determines
 * the eligibility of an individual applying for a job as a delivery driver.
 * In order for the individual to be eligible, they must be 18 years of age or older,
 * or be above the age of 15 and have their parents consent to work.
 * Additionally they must possess a valid social security number and have no driving accidents.
 * Let the variable age represent the individual's age, and the boolean variables parental_consent represent parental consent,
 * ssn represents a valid social security number, and accidents represent whether they have had any car accidents.
 * For this exercise you will write your code within the parenthesis of the if statement provided.
 * In the case that the person cannot work, do not display any output.
 */
#include <iostream>
using namespace std;

void logical_operators(int age, bool parental_consent, bool ssn, bool accidents)
{
	if ((age >= 18 || (age > 15 && parental_consent)) && ssn && !accidents)
	{
		cout << "Yes, you can work.";
	}
}

int main()
{
	logical_operators(18, false, true, false);
	logical_operators(16, true, true, false);
	logical_operators(16, true, true, true);
	logical_operators(16, true, false, false);
	logical_operators(18, false, false, false);
	return 0;
}
