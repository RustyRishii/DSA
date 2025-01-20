#include<iostream>
#include<string>
using namespace std;

int main ()
{
	cout << "Enter a number: ";
	int day;
	cin >> day;

	switch (day)
	{
	case 1: cout << "Monday";
		break;
	case 2: cout << "Tuesday";
		break;
	case 3: cout << "Wednesday"; 
		break;
	default:
	cout <<"Invalid";
		break;

	}
	cout << " Check";
	return 0;
}