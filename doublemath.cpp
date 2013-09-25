#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //create variables
    double double1;
    double double2;

    //get input
    cout << "Enter the first number ";
    cin >> double1;
    cout << "Enter the second number ";
    cin >> double2;

    //display results
    cout << "IntMath ---" << endl;
    cout << double1 << " + " << double2 << " = " << double1 + double2 << endl;
    cout << double1 << " - " << double2 << " = " << double1 - double2 << endl;
    cout << double2 << " - " << double1 << " = " << double2 - double1 << endl;
    cout << double1 << " * " << double2 << " = " << double1 * double2 << endl;
    cout << double1 << " / " << double2 << " = " << double1 / double2 << endl;
    cout << double2 << " / " << double1 << " = " << double2 / double1 << endl;

    //return 0
    return(0);
}
