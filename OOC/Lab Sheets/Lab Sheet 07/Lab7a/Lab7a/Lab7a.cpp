// Lab7a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RectangleX.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main(){
	
	double area;

	RectangleX rec1;
	RectangleX rec2;
	Circle cir;

	rec1.setLength(18);
	rec1.setWidth(10);
	rec2.setLength(7);
	rec2.setWidth(2);
	cir.setRadius(5);

	area = rec1.calcArea() - (rec2.calcArea() + cir.calcArea());

	cout << "Area : " << area << endl;

    return 0;
}

