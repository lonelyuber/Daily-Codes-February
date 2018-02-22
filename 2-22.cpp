#include <iostream>
using namespace std;

void area(int L, int W, int H);

int main() {

	cout << "The area of a 2 x 4 x 6 is: ";
	area(2, 4, 6);

}

void area(int L, int W, int H) {
	cout << L*W*H;

}