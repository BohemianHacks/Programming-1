//Program to calculate the area of a triangle
//by Jeff Blecha 

#include <iostream>
#include <iomanip>
#include <string>
#include "stdafx.h"

using namespace std;

double triArea(double b, double h){
	return b/2.0*h;
}

int main(){
	double base;
	double height;
	double area;
	cout << "Base:";
	cin >> base;
	cout << "Height:";
	cin >> height;
	area = triArea(base,height);
	cout << "Area:" << area << endl;
	cin.ignore();
	return 0;
}
