//feetInch.cpp: program to convert feet to inches
//By Jeff Blecha 9-18-2013

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(){

    //declare variables
    double feet;
    double inches;

    //get input
    cout << "Feet:";
    cin >> feet;

    //find inches
    inches = 12.0 * feet;

    //display result
    cout << "Inches:" << inches << endl;

    //return 0
    return(0);
}
