//Circle.cpp: program to find an area of a circle
//By Jeff Blecha 9-18-2013

#include <iostream>
#include <iomanip>
#include <math.h>
#include "stdafx.h"
#define _USE_MATH_DEFINES


using namespace std;

int main (){

    //declare variables
    double radius;
    double area;

    //get input
    cout << "Radius:";
    cin >> radius;

    //find area (pi*r^2)
    area = radius * radius * M_PI;

    //display results
    cout << "Area:" << area << endl;

    //return 0
    return (0);
}
