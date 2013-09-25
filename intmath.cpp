#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //create variables
    int integer1;
    int integer2;

    //get input
    cout << "Enter the first number ";
    cin >> integer1;
    cout << "Enter the second number ";
    cin >> integer2;

    //display results
    cout << "IntMath ---" << endl;
    cout << integer1 << " + " << integer2 << " = " << integer1 + integer2 << endl;
    cout << integer1 << " - " << integer2 << " = " << integer1 - integer2 << endl;
    cout << integer2 << " - " << integer1 << " = " << integer2 - integer1 << endl;
    cout << integer1 << " * " << integer2 << " = " << integer1 * integer2 << endl;
    cout << integer1 << " / " << integer2 << " = " << integer1 / integer2 << endl;
    cout << integer2 << " / " << integer1 << " = " << integer2 / integer1 << endl;
    cout << integer1 << " % " << integer2 << " = " << integer1 % integer2 << endl;
    cout << integer2 << " % " << integer1 << " = " << integer2 % integer1 << endl;

    //return 0
    return(0);
}
