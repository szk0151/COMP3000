#include <iostream>

using namespace std;

int main() {

	int time,
		distance;
	int acceleration = 32;

	cout << "Enter a time in seconds." << endl;
	cin >> time;

	distance = (acceleration / 2) * (time * time);

	cout << "An object in freefall for " << time << " seconds will fall " << distance << "feet." << endl;

};
