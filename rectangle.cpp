//rectangle.cpp: program to find area of rectangle
//By Jeff Blecha 9-18-2013

#include "stdafx.h"
#include <iostream>

using namespace std;

int main (){
    
    //declare variables
    double width;
    double height;
    double area;

    //get input
    cout << "Width:";
    cin >> width;
    cout << "Height:";
    cin >> height;

    //calculate area
    area = width * height;

    //display results
    cout << area << endl;

    //return 0
    return(0);
}
