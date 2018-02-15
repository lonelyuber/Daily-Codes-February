#include <iostream>
using namespace std;

int main() { //Surface Area & Volume of a cube.

	cout << "Choose one side of the cube." << endl;
	double input;
	cin >> input;

	cout << input * input * 6 << " is the Surface Area." << endl; //Surface Area

	cout << input * input * input << " is the Volume" << endl; //Volume


}