//milesCM.cpp: Program to convert miles to centimeters
//By Jeff Blecha 9-18-2013

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(){

    //declare variables
    double miles;
    double centimeters;
    const double centimetersPerMile = 160934.4;

    //get input
    cout << "Miles:";
    cin >> miles;

    //convert to centimeters;
    centimeters = centimetersPerMile * miles;

    //display results;
    cout << "Centimeters:" << centimeters << endl;

    //return 0
    return(0);
}
