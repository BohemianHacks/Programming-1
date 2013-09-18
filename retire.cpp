//retire.cpp: Program to fine age of retirement
//By Jeff Blecha 9-18-2013

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    //declare variables
    string name;
    unsigned int age;

    //get input
    cout << "What is your name? ";
    cin >> name;
    cout << "How old are you?   ";
    cin >> age;

    //display result
    cout << name << " can retire in " << (67 - age) << " years." << endl;

    //return 0
    return(0);
}
