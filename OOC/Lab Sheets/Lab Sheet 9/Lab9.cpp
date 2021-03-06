// Lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Distance.h"

using namespace std;

int main()
{
	//static object
	Distance d;
	d.printDistance();//print distance

	//Overloaded constructor
	Distance d1(11, 6.25);
	d1.printDistance(); //print disatnce


	//Exercise 2
	//Dynamic object
	Distance *dist1 = new Distance();
	dist1->printDistance(); //dynamic object method calling

	Distance *dist2 = new Distance(11, 6.25);
	dist2->printDistance();


	//Exercise 3
	Distance distA,distB;
	Distance distC(11, 6.25);

	distA.inputDistance();

	distC.addDistance(distA, distB);

	system("pause");//for pause the terminal
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
