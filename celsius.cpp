//celcius.cpp: program to convert ferinheight to celcius
//By Jeff Blecha

#include "stdafx.h"
#include <iostream>

using namespace std;

int main (){

    //declare variables
    double ferinheight;
    double celcius;

    //get input
    cout << "Degrees Ferinheight:";
    cin >> ferinheight;

    //convert to celcius
    celcius = (ferinheight - 32.0)*(5.0/9.0);

    //display results
    cout << "Degrees Celcius:" << celcius << endl;

    //return 0
    return(0);
}
