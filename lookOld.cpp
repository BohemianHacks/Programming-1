//Program to find age in months
//Jeff Blecha 9-16-2013


#include <string>
#include <iomanip>
#include <iostream>
#include "stdafx.h"

using namespace std;

int main(){
    //declare variables
    string name;
    int age;

    //get input
    cout << "What is your name? ";
    cin >> name;
    cout << "How old are you? ";
    cin >> age;

    //display result
    cout << "Well, " << name << ", you don't look " << age*12 << " months old."<< endl;
    return 0;
}
