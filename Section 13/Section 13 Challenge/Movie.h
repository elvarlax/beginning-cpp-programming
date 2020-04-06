/***********************************************************
* Section 13 Challenge
* Movie.h
*
* Models a Movie with the following attributes
*
* string name - the name of the movie
* string rating - G, PG, PG-13, R
* int watched - the number of times you've watched the movie
/***********************************************************/

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
using namespace std;

class Movie {
private:
	string name; // the name of the movie
	string rating; // the movie rating G, PG, PG-13, R
	int watched; // the number of times you've watched the movie
public:
	// Constructor - expects all 3 movie attributes
	Movie(string name, string rating, int watched);

	// Copy constructor
	Movie(const Movie& source);

	// Destructor
	~Movie();

	// Basic getters and setters for private attributes

	void set_name(string name);
	string get_name() const;

	void set_rating(string rating);
	string get_rating() const;

	void set_watched(int watched);
	int get_watched() const;

	// Simply increment the watched attribute by 1
	void increment_watched();

	// Simply displays the move information ex.) Big, PG-13, 2
	void display() const;
};

#endif // _MOVIE_H_
