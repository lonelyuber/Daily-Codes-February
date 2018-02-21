#include <iostream>
using namespace std;

int main() {

	char input = 'A';
	int room = 1;

	while (input != 'B') {
		switch (room) {

		case 1:
			cout << "You are in Room 1." << endl;
			cout << "By going right you are entering Room #2." << endl;
			cout << "To go right Enter 'R'" << endl;
			cin >> input;
			if (input == 'R' || input == 'r')
				room = 2;
			break;
		case 2:
			cout << "You are in Room #2." << endl;
			cout << "To enter the other rooms:" << endl;
			cout << "Room #1 - Enter L" << endl;
			cout << "Room #3 - Enter R" << endl;
			cout << "Room #4 - Enter D" << endl;
			cin >> input;
			if (input == 'L' || input == 'l')
				room = 1;
			if (input == 'R' || input == 'r')
				room = 3;
			if (input == 'D' || input == 'd')
				room = 4;
			break;
		case 3:
			cout << "You are in Room #3" << endl;
			cout << "Room 2 - Enter L" << endl;
			cin >> input;
			if (input == 'L' || input == 'l')
				room = 2;
			break;
		case 4:
			cout << "You are in room 4" << endl;
			cout << "Room 2 - Enter U" << endl;
			cin >> input;
			if (input == 'U' || input == 'u')
				room = 2;
			break;
		}
	}
	}