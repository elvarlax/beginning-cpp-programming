/*
 * Section 19 Challenge 1 - Formatting Output
 * ===================================================================================
 * I have provided you with the starter source code for this challenge.
 * In this challenge you are to display the provided data in a nicely formatted table.
 * Your table does not have to match mine, but practice with the format manipulators
 * so you become comfortable with them.
 *
 * There are 3 structures provided. Yes, these could also be classes with public data,
 * but it's common to use structures when we simply want to model only data and not
 * operations as we would with classes.
 *
 * The structures work together to create a Tours structure that will contain
 * information about Tours to South America.
 * The Tours include Countries, Cities within those countries along with population and cost data for each city tour.
 * I know, population? Huh? I just wanted a big number so that you can format it, OK :)
 *
 * Please watch the Challenge video for the expected output. It won't look right if I put it in this
 * editor because of the font style.
 *
 * In the provided source code I'm giving you some code that displays the data from the structures
 * and the vectors within the structures. This code uses tabs to format the data and it looks pretty ugly.
 *
 * Have fun!! Create functions if you like, use constants, whatever you think makes sense!
 */
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct City {
	string name;
	long population;
	double cost;
};

struct Country {
	string name;
	vector<City> cities;
};

struct Tours {
	string title;
	vector<Country> countries;
};

int main() {
	Tours tours
	{ "Tour Ticket Prices from Miami",
		{
			{
				"Colombia", {
					{"Bogota", 8778000, 400.98},
					{"Cali", 2401000, 424.12},
					{"Medellin", 2464000, 350.98},
					{"Cartagena", 972000, 345.34}
				},
			},
			{	"Brazil", {
					{"Rio De Janiero", 13500000, 567.45},
					{"Sao Paulo", 11310000, 975.45},
					{"Salvador", 18234000, 855.99}
				},
			},
			{	"Chile", {
					{"Valdivia", 260000, 569.12},
					{"Sao Paulo", 7040000, 520.00}
				},
			},
			{	"Argentina", {
					{"Buenos Aires", 3010000, 723.77}
				}
			},
		}
	};

	const int total_width{ 70 };
	const int country_width{ 20 };
	const int city_width{ 20 };
	const int population_width{ 15 };
	const int cost_width{ 15 };
	int title_length = tours.title.length();

	cout << setw((total_width - title_length) / 2) << "" << tours.title << endl << endl;
	cout << setw(country_width) << left << "Country"
		<< setw(city_width) << left << "City"
		<< setw(population_width) << right << "Population"
		<< setw(cost_width) << right << "Price" << endl;
	cout << setw(total_width) << setfill('-') << "" << endl;
	cout << setfill(' ') << setprecision(2) << fixed;

	string countryCheck{};
	for (auto country : tours.countries) {
		for (auto city : country.cities) {
			cout << setw(country_width) << left << (country.name != countryCheck ? country.name : "")
				<< setw(city_width) << left << city.name
				<< setw(population_width) << right << city.population
				<< setw(cost_width) << right << city.cost << endl;
			countryCheck = country.name;
		}
	}
	cout << endl;

	return 0;
}