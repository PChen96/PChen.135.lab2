/*
Author: 
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 2 task A

*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter n" << endl;//input a number between 1 to 20
	int n = 0;
	cin >> n;
	
	while ((n < 1) || (n > 20) ) //error checking the input to see if it is 1 - 20
	{	cout << "Please re-enter" << endl;
		cin >> n;
	}
	
	int total = 1; //2^0
	for(int e = 1; e <= n; e++)
	{
		total = total*2;
		cout << total << endl;
	}
}
		
