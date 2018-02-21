#include <iostream>
using namespace std;

int main() {
char input;
cout << "Enter 'y' for hearts." << endl;

	do {
		
		cin >> input;
		while (input == 'y') {
			cout << "_$$$$$$___$$$$$$_" << endl;
			cout << "$$$$$$$$_$$$$$$$$" << endl;
			cout << "$$$$$$$$$$$$$$$$$" << endl;
			cout << "_$$$$$$$$$$$$$$$_" << endl;
			cout << "___$$$$$$$$$$$___" << endl;
			cout << "_____$$$$$$$_____" << endl;
			cout << "_______$$$_______" << endl;
			cout << "________$________" << endl;
			
		}
		if (input != 'y') {
			cout << "Hit 'y' instead." << endl;
		}
	} while (1);
}