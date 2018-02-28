#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	while (true) {

		int snow = rand() % 100+1;
		for (int i = 0; i < snow; i++)
			cout << " ";
		cout << "*";

	}
}