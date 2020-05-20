/*
 * Section 14 Challenge 1 (Overload the operators using member functions)
 * ======================================================================
 * Overload the following operators in the provided Mystring class.
 *
 * To gain experience overloading operators, you should do this challenge twice.
 * First, overload the operators using member functions and then in another project overload the same operators
 * again using non-member functions.
 *
 * Please do it once using member methods and then again using non-member functions.
 *
 * Here is a list of some of the operators that you can overload for this class:
 *
 * -  - Unary minus. Returns the lowercase version of the object's string.
 *      -s1
 * == - Returns true if the two strings are equal.
 *      (s1 == s2)
 * != - Returns true if the two strings are not equal.
 *      (s1 != s2)
 * <  -	Returns true if the lhs string is lexically less than the rhs string.
 *      (s1 < s2)
 * >  -	Returns true if the lhs string is lexically greater than the rhs string.
 *      (s1 > s2)
 * +  - Concatenation. Returns an object that concatenates the lhs and rhs.
 *      s1 + s2
 * += - Concatenate the rhs string to the lhs string and store the result in lhs object.
 *      s1 += s2; equivalent to s1 = s1 + s2;
 * *  - Repeat. Results in a string that is copied n times.
 *      s2 * 3;  ex). s2 = "abc";
 *                    s1 = s2 * 3;
 *                    s1 will result in "abcabcabc"
 * *= - Repeat the string on the lhs n times and store the result back in the lhs object.
 *      s1 = "abc";
 *      s1 *= 4;  s1 = s1 will result in "abcabcabcabc"
 *
 * If you wish to overload the ++ and -- operators remember that they have pre and post versions.
 */
#include "Mystring.h"

int main() {
    cout << boolalpha << endl;
    Mystring a{ "frank" };
    Mystring b{ "frank" };
    cout << (a == b) << endl;         // true
    cout << (a != b) << endl;         // false

    b = "george";
    cout << (a == b) << endl;         // false
    cout << (a != b) << endl;         // true
    cout << (a < b) << endl;          // true
    cout << (a > b) << endl;          // false

    Mystring s1{ "FRANK" };
    s1 = -s1;
    cout << s1 << endl;               // frank              

    s1 = s1 + "*****";
    cout << s1 << endl;               // frank*****       

    s1 += "-----";                    // frank*****-----
    cout << s1 << endl;

    Mystring s2{ "12345" };
    s1 = s2 * 3;
    cout << s1 << endl;               // 123451234512345

    Mystring s3{ "abcdef" };
    s3 *= 5;
    cout << s3 << endl;               // abcdefabcdefabcdefabcdefabcdef

    Mystring repeat_string;
    int repeat_times;
    cout << "Enter a string to repeat: " << endl;
    cin >> repeat_string;
    cout << "How many times would you like it repeated? " << endl;
    cin >> repeat_times;
    repeat_string *= repeat_times;
    cout << "The resulting string is: " << repeat_string << endl;

    cout << (repeat_string * 12) << endl;

    repeat_string = "RepeatMe";
    cout << (repeat_string + repeat_string + repeat_string) << endl;

    repeat_string += (repeat_string * 3);
    cout << repeat_string << endl;

    repeat_string = "RepeatMe";
    repeat_string += (repeat_string + repeat_string + repeat_string);


    Mystring s = "Frank";
    ++s;
    cout << s << endl;               // FRANK

    s = -s;
    cout << s << endl;               // frank
    Mystring result;
    result = ++s;
    cout << s << endl;               // FRANK
    cout << result << endl;          // FRANK

    s = "Frank";
    s++;
    cout << s << endl;               // FRANK

    s = -s;
    cout << s << endl;               // frank
    result = s++;
    cout << s << endl;               // FRANK
    cout << result << endl;          // frank
    return 0;
}