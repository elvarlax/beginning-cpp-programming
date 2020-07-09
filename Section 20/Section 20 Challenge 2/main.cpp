/*
 * Section 20 Challenge 2 - Using std::list
 * ========================================
 * In this challenge you will create a menu driven application that
 * will simulate a user playing songs from a playlist of songs.
 *
 * We will use a list to simulate the user selecting the first song in the playlist
 * then selecting next and previous to play forward or backwards through the playlist.
 *
 * Please refer to the video demo run.
 *
 * We will also allow users to add new songs to the playlist and they
 * will be added prior to the currently playing song.
 * The menu looks as follows:
 *
 * F - Play First song
 * N - Play Next song
 * P - Play Previous song
 * A - Add and play a new song at current location
 * L - List the current playlist
 * ================================================
 * Enter a selection (Q to quit):
 *
 * And the available playlist is modeled as a std::list<Song>
 * I will provide the Song class.
 * Following are the songs in the playlist.
 * I grabbed these from the pop charts, you can use them or change them to any songs you wish.
 *
 * God's Plan           Drake                        5
 * Never Be The Same    Camila Cabello               5
 * Pray For Me          The Weekend and K.Lamar      4
 * The Middle           Zedd, Maren Morris & Gray    5
 * Wait                 Maroone 5                    4
 * Whatever It Takes    Imagine Dragons              3
 *
 * I have provided the starting project.
 * Have fun!
 *
 * Note:
 * If you have trouble reading input, you can clear std::cin and
 * ignore everything in the buffer with:
 *
 * std::cin.clear();
 * std::cin.ignore(std::numberic_limits<std::streamsize>::max(),'\n');
 */
#include "Song.h"

ostream& operator<<(ostream& os, const Song& s) {
	os << setw(20) << left << s.name
		<< setw(30) << left << s.artist
		<< setw(2) << left << s.rating;
	return os;
}

void display_menu() {
	cout << "\nF - Play First Song" << endl;
	cout << "N - Play Next Song" << endl;
	cout << "P - Play Previous Song" << endl;
	cout << "A - Add and play a new Song at current location" << endl;
	cout << "L - List the current playlist" << endl;
	cout << "====================================================" << endl;
	cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song& song) {
	cout << "Playing: " << endl;
	cout << song << endl;
}

void display_playlist(const list<Song>& playlist, const Song& current_song) {
	for (auto& song : playlist) {
		cout << song << endl;
	}
	cout << "Current song: " << endl;
	cout << current_song << endl;
}

int main() {
	list<Song> playlist{
		{"God's Plan", "Drake", 5},
		{"Never Be The Same", "Camila Cabello", 5},
		{"Pray For Me", "The Weekend and K.Lamar", 4},
		{"The Middle", "Zedd, Maren Morris & Gray", 5},
		{"Wait", "Maroone 5", 4},
		{"Whatever It Takes", "Imagine Dragons", 3}
	};

	list<Song>::iterator current_song = playlist.begin();

	char selection{};

	display_playlist(playlist, *current_song);

	do {
		display_menu();
		cin >> selection;
		selection = toupper(selection);

		if (selection == 'F') {
			cout << "Playing first song" << endl;
			current_song = playlist.begin();
			play_current_song(*current_song);
		}
		else if (selection == 'N') {
			cout << "Playing next song" << endl;
			current_song++;
			if (current_song == playlist.end()) {
				cout << "Wrapping to start of playlist" << endl;
				current_song = playlist.begin();
			}
			play_current_song(*current_song);
		}
		else if (selection == 'P') {
			cout << "Playing previous song" << endl;
			if (current_song == playlist.begin()) {
				cout << "Wrapping to end of playlist" << endl;
				current_song = playlist.end();
			}
			current_song--;
			play_current_song(*current_song);
		}
		else if (selection == 'A') {
			string name, artist;
			int rating;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "Adding and playing new song" << endl;

			cout << "Enter song name: ";
			getline(cin, name);

			cout << "Enter song artist: ";
			getline(cin, artist);

			cout << "Enter your rating (1-5): ";
			cin >> rating;

			playlist.insert(current_song, Song{ name, artist, rating });
			current_song--;
			play_current_song(*current_song);
		}
		else if (selection == 'L') {
			cout << endl;
			display_playlist(playlist, *current_song);
		}
		else if (selection == 'Q') {
			cout << "Qutting" << endl;
		}
		else {
			cout << "Selection does not exist, please try again!" << endl;
		}
	} while (selection != 'Q');

	cout << "Thanks for listening!" << endl;

	return 0;
}