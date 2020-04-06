#include <iostream>
#include "Movies.h"
using namespace std;

/***********************************************************************
Movies no args constructor
***********************************************************************/
Movies::Movies() {
}

/***********************************************************************
Movies destructor
************************************************************************/
Movies::~Movies() {
}

/***********************************************************************
add_movie expects the name of the movie, rating and watched count

It will search the movies vector to see if a movie object already exists
with the same name.

If it does then return false since the movie already exists
Otherwise, create a movie object from the provided information
and add that movie object to the movies vector and return true.
************************************************************************/
bool Movies::add_movie(string name, string rating, int watched)
{
	for (const auto& movie : movies) {
		if (movie.get_name() == name) {
			return false;
		}
	}

	if (!name.empty() || !rating.empty() || watched != NULL) {
		movies.push_back(Movie(name, rating, watched));
		return true;
	}
	return false;
}

/***********************************************************************
increment_watched expects the name of the movie to increment the
watched count

It will search the movies vector to see if a movie object already exists
with the same name.
If it does then increment that object watched by 1 and return true.

Otherwise, return false since there is no movie object with the movie name
provided that exists to increment.
************************************************************************/
bool Movies::increment_watched(string name)
{
	for (auto& movie : movies) {
		if (movie.get_name() == name) {
			movie.increment_watched();
			return true;
		}
	}
	return false;
}

/***********************************************************************
display

display all the movie objects in the movies vector.
for each movie call the movie.display method so the movie
object displays itself
************************************************************************/
void Movies::display() const
{
	if (movies.empty()) {
		cout << "Sorry, no movies to display" << endl;
	}
	else {
		for (const auto& movie : movies) {
			movie.display();
		}
	}
}