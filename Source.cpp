#include <iostream>

using namespace std;

int main()
{
	int days;
	cout << " I will give you your daily schedule for all week plaese choose day ";
	cout << endl << " Ñhoose one of this --> 1-Monday,2-Tuesday,3-Wednesday, \n 4-Thursday,5-friday,6-Saturday,7-Sunday" << endl;
	cout << "    ";
	cin >> days;
	switch (days)
	{
	case 1:
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 basketball";
		break;
	case 2:
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 shool homework";
		break;
	case 3:
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 basketball";
		break;
	case 4:
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 shool homework";
		break;
	case 5:
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 basketball";
		break;
	case 6:
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:00 to 19:40 IT";
		break;
	case 7:
		cout << "Sleeping till 10:00" << endl << "From 11:00 to 14:45  computer gaming" << endl << "From 15:30 to 17:30 basketball with friends";
		break;
	default:
		cout << "Choose one of this (1,2,3,4,5,6,7)";
		break;
	}



	return 0;
}