#include <iostream>
#include <iomanip>
#include <string>
#include "stdafx.h"

int main(){
    //declare variabls
    int number;
    int result;

    //get input
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << std::endl;

    //calculate result
    result = 2 * number;

    //display
    std::cout << "Twice your number is " << result << ".\n";
    std::cout << "Thanks for playing!" << std::endl;

    //return 0
    return(0);
}
