#include <iostream>

using namespace std;

int main()
{
	int maxRoomCapacity,
		numberOfPeople,
		legalNumberOfPeople;

	cout << "Enter the Maximum occupancy for the room." << endl;
	cin >> maxRoomCapacity;
	cout << "Enter the number of occupants of the room." << endl;
	cin >> numberOfPeople;

	legalNumberOfPeople = numberOfPeople - maxRoomCapacity;
	if (legalNumberOfPeople > 0) {
		cout << "ATTENTION: MAXIMUM OCCUPANCY EXCEEDED. THE LAW REQUIRES " << legalNumberOfPeople << " PERSONS TO LEAVE THE ROOM IMMEDIATELY" << endl;
	}
	else
		cout << "The number of occupants does not exceed the legal maximum.";

};
