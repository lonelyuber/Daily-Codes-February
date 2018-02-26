#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main() {

	while (true) {

		int Hertz = rand() % 1800 + 200;
		int Milliseconds = rand() % 1500 + 100;

		Beep(Hertz, Milliseconds);

	}
}