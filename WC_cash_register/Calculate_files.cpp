#include "Calculate_files.h"

string Calculate::Execute_main()
{
	string test;
	cout << "Hello" << endl << endl;

	cin >> test;
	system("pause");
	return "Hello";
}

// Get the total of a single .csv file and send back to the GUI for further calculations
double Calculate::total(string cn, string fn, char lett)
{
	// Variables
	string FilePath;
	string computer = cn;
	string file = fn;
	string which;

	// Concatenate the full path to the excel files
	FilePath = "C:/Users/";
	FilePath += computer;
	FilePath += "/Documents/wc_excel_files/";
	FilePath += file;
	FilePath += ".csv";

	ifstream run;
	run.open(FilePath);

	if (run.is_open())
	{
		int count = 0;	// Seperator counter

		int sum_total_clients = 0;
		double sum_total_a = 0, sum_total_d = 0, sum_totals = 0;

		while (run.good())
		{
			string line;
			getline(run, line, ',');
			//cout << line << endl;
			cout << "Count: " << count << endl;
			cout << "Line: " << line << endl;

			if (count == 0);
			else if (count == 1)
			{
				sum_total_a += stod(line);
			}
			else if (count == 2)
			{
				sum_total_d += stod(line);
			}
			else if (count == 3)
			{
				sum_totals += stod(line);
			}

			if (count == 3)
			{
				count = 0;
				sum_total_clients += 1;
			}

			count++;
		}

		// Case statement
		switch (lett)
		{
		case 'a':
			return sum_total_clients;
			break;
		case 'b':
			return sum_total_a;
			break;
		case 'c':
			return sum_total_d;
			break;
		case 'd':
			return sum_totals;
			break;
		default:
			return -99.99;
			break;
		}

		run.close();
	}
	else
	{
		return -99.99;
	}
}