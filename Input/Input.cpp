// Input.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name, then press enter: \n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";
	keep_window_open();
    return 0;
}

