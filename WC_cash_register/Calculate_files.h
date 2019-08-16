#pragma once
#ifndef CALCULATE_FILES_H
#define CALCULATE_FILES_H

// Preheaders
#include <fstream>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

class Calculate
{
public:
	Calculate()
	{
		// Constructor
	}

	~Calculate()
	{
		// Destructor
	}

	string Execute_main();
	
	double total(string computer_name, string file_name, char lett);

private:
	string computer_name;
	string file_name;
};

#endif