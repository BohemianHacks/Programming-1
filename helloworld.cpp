//Hello world program
//Built to introduce me to C++
//by Jeff Blecha

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void print(string words){
	cout << words << endl;
}

int main(){
	print("Hello World!");
	cin.ignore();
	return 0;
}
