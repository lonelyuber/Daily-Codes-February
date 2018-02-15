#include <iostream>
using namespace std;

int main() {

	char input = 'A';
	int room = 1;

	while (input != 'B') {
		switch (room) {

		case 1:
			cout << "You are in Room 1. To go south enter 'S'." << endl;
			cin >> input;
			if (input == 's' || input == 'S')
				room = 2;
			break;
		case 2:
			cout << "You are in Room 2." << endl;
			cout << "You can go North to room 1 with 'N'" << endl;
			cout << "You can go East to room 3 with 'E'" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 1;
			if (input == 'e' || input == 'E')
				room = 3;
			break;
		case 3:
			cout << "You are in Room 3." << endl;
			cout << "You can go West to room 2 with 'W'" << endl;
			cout << "You can go South to room 4 with 'S'" << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 2;
			if (input == 's' || input == 'S')
				room = 4;
			break;
		case 4:
			cout << "You are in Room 4." << endl;
			cout << "---------------------------" << endl;
			cout << "|      '   `       *      |" << endl;
			cout << "{ You made it to the end! }" << endl;
			cout << "|  ~      ,     .    `   |" << endl;
			cout << "---------------------------" << endl;
			cout << "You can go back North to room 3 with 'N'" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 3;
			break;

	}
	}

}