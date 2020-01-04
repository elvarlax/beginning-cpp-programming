/*
 * Section 10 Challenge
 * ====================
 * A simple and very old method of sending secret messages is the substitution cipher.
 * You might have used this cipher with your friends when you were a kid.
 * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 * For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.
 *
 * Write a program that asks a user to enter a secret message.
 *
 * Encrypt this message using the substitution cipher and display the encrypted message.
 * Then decrypt the encrypted message to the original message.
 *
 * You may use the 2 strings below for your substitution.
 * For example, to encrypt you can replace the character at position n in alphabet
 * with the character at position n in key.
 *
 * To decrypt you can replace the character at position n in key
 * with the character at position n in alphabet.
 *
 * Have fun! And make the cipher stronger if you wish!
 * Currently the cipher only substitutes letters - you could easily add digits, punctuation, whitespace and so forth.
 * Also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa.
 * This could also be improved.
 *
 * Remember, the less code you write the less you have to test!
 * Reuse existing functionality in libraries and in the std::string class!
 */
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string alphabet{"A abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string cipher{" AXZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
	string encrypted_message{}, decrypted_message{}, secret_message{};

	cout << "Enter your secret message: ";
	getline(cin, secret_message);

	cout << "\nEncrypting message..." << endl;

	for (char c : secret_message)
	{
		if (alphabet.find(c))
		{
			size_t position = alphabet.find(c);
			if (position != string::npos)
			{
				char new_char{cipher.at(position)};
				encrypted_message += new_char;
			}
			else
			{
				encrypted_message += c;
			}
		}
	}

	cout << "\nEncrypted message: " << encrypted_message << endl;

	cout << "\nDecrypting message..." << endl;

	for (char c : encrypted_message)
	{
		if (alphabet.find(c))
		{
			size_t position = cipher.find(c);
			if (position != string::npos)
			{
				char new_char{alphabet.at(position)};
				decrypted_message += new_char;
			}
			else
			{
				decrypted_message += c;
			}
		}
	}

	cout << "\nDecrypted message: " << decrypted_message << endl;

	return 0;
}
