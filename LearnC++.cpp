#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main() {
	cout << "Please enter your grade: ";
	int x;
	cin >> x;

	if (x < 25)
	{
		cout << "You got F grade";
	}
	else if( x <= 44)
	{
		cout << "You E grade";
	}
	else if ( x <= 49)
	{
		cout << "D";
	}
	else if (x <= 59)
	{
		cout<< "C";
	}
	else if(  x <= 79)
	{
		cout<< "B";
	}
	else if ( x <=100)
	{
		cout << "A";
	}
}


// g++ LearnC++.cpp -o LearnC++    
// .\LearnC++