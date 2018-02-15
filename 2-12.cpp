#include <iostream>
using namespace std;

int main() {
	bool exit = false;
	do {
		cout << "What was your bill amount?" << endl;
		double input;
		cin >> input;
		
		cout << input * 0.15 << "$ is 15% tip." << endl;

		if (input == 0) {
			exit = true;
		}
	} while (exit != true);

}