//
//  main.cpp
//  CSeed
//
//  Created by Denny Scott on 2014-11-15.
//  Copyright (c) 2014 Denny Scott. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
	char letter = 'A';
	int integer = 0;
	float dec = 0.0f;

	//Collect user data
	cout << "Enter a letter: ";
	cin >> letter;
	cout << "Enter an Integer: ";
	cin >> integer;

	cout << "Enter a float number: ";
	cin >> dec;

	cout << endl;

	//Display user data
	cout << "Letter: " << letter << endl;
	cout << "Integer: " << integer << endl;
	cout << "Float: " << dec << endl;

}
