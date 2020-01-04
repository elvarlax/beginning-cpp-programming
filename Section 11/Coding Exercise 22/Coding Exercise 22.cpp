/*
 * Coding Exercise #22 - Functions and Prototypes - Converting Temperatures
 * In this exercise you will create a program that will be used to convert
 * Fahrenheit temperatures to Celsius and Kelvin temperatures through the use of two functions.
 *
 * For this program, assume that temperature will be represented as a double value.
 *
 * Begin by defining the function prototypes for the functions fahrenheit_to_celsius
 * and fahrenheit_to_kelvin which are both passed double value and return a double value.
 *
 * Now, at the bottom of the file, write the full definitions of both functions.
 *
 * The function fahrenheit_to_celsius is passed a Fahrenheit temperature and returns a rounded Celsius temperature.
 * You may use the <cmath> function round in order to round the return value.
 * The formula to convert Fahrenheit to Celsius is (5.0 / 9.0) * (temperature - 32).
 *
 * The function fahrenheit_to_kelvin is passed a Fahrenheit temperature and returns a rounded Kelvin temperature.
 * The formula to convert Fahrenheit to Kelvin is (5.0 / 9.0) * (temperature - 32) + 273.
 *
 * Remember the rules of PEMDAS when defining the body of your functions.
 *
 * Now, from the temperature_conversion function, declare and initialize the variables celsius_temperature and kelvin_temperature by
 * calling the appropriate functions which you have just defined and passing the variable fahrenheit_temperature.
 *
 * You do not need to declare or initialize fahrenheit_temperature as it is already available to you as a parameter of the temperature_conversion function.
 */
#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double fahrenheit_temperature);
double fahrenheit_to_kelvin(double fahrenheit_temperature);

void temperature_conversion(double fahrenheit_temperature)
{
	double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
	double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

	cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " <<
		celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

int main()
{
    temperature_conversion(100);
	temperature_conversion(200);
	temperature_conversion(300);
	temperature_conversion(400);
	temperature_conversion(500);
	return 0;
}

double fahrenheit_to_celsius(double fahrenheit_temperature)
{
	return round( (fahrenheit_temperature - 32) * 5.0 / 9.0);
}

double fahrenheit_to_kelvin(double fahrenheit_temperature)
{
	return round( (fahrenheit_temperature - 32) * 5.0 / 9.0 + 273);
}
