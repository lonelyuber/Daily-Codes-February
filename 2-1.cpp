#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	int i;
	cout << "Pick a sound" << endl;
	cout << "1 - Bomb" << endl;
	cout << "2 - Zap" << endl;
	cout << "3 - Dun" << endl;
	cout << "4 - Scream" << endl;
	cin >> i;

	switch (i) {
	case 1:
		PlaySound(TEXT("Usatbomb.WAV"), NULL, SND_FILENAME);
		cout << "Usat Life" << endl;
		break;
	case 2:
		PlaySound(TEXT("Zap.WAV"), NULL, SND_FILENAME);
		cout << "Pew" << endl;
		break;
	case 3:
		PlaySound(TEXT("DunDunDun.WAV"), NULL, SND_FILENAME);
		cout << "DUN" << endl;
		break;
	case 4:
		PlaySound(TEXT("Scream.WAV"), NULL, SND_FILENAME);
		cout << "dahhhh" << endl;
		break;
	}



}