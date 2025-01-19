#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main() {
	cout << "Please enter your age: ";
	int x;
	cin >> x;

	if (x >= 18)
	{
		cout << "You are an adult";
	}
	else 
	{
		cout << "You are not an adult. You're still a kid";
	}
}
