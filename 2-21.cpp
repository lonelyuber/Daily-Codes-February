#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	for (int a = 0; a < 2; a = a + 1) // beep beep
		Beep(330, 100); Sleep(500);

	for (int b = 0; b < 1; b = b + 1)
		Beep(400, 100); Sleep(100);

	for (int c = 0; c < 1; c = c + 1)
		Beep(500, 100); Sleep(100);

	for (int b = 0; b < 1; b = b + 1)
		Beep(400, 100); Sleep(100);

	for (int c = 0; c < 1; c = c + 1)
		Beep(500, 300); Sleep(100);

	for (int c = 0; c < 1; c = c + 1)
		Beep(600, 300); Sleep(200);

	for (int b = 0; b < 1; b = b + 1)
		Beep(500, 100); Sleep(100);

	for (int b = 0; b < 1; b = b + 1)
		Beep(400, 100); Sleep(100);
	for (int a = 0; a < 1; a = a + 1)
		Beep(330, 100); Sleep(500);
}