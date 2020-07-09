#ifndef _SONG_H_
#define _SONG_H_

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
#include <numeric>
using namespace std;

class Song {
	friend ostream& operator<<(ostream& os, const Song& s);
	string name;
	string artist;
	int rating;
public:
	Song() = default;
	Song(string name, string artist, int rating)
		: name{ name }, artist{ artist }, rating{ rating } {};
	string get_name() const { return name; }
	string get_artist() const { return artist; }
	int get_rating() const { return rating; }
	bool operator<(const Song& rhs) const { return this->name < rhs.name; }
	bool operator==(const Song& rhs) const { return this->name == rhs.name; }
};

#endif // _SONG_H_