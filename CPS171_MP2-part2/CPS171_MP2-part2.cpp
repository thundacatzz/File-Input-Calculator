#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;
/* This program reads arithmetic operators and integers from a properly structured input text file, then performs the corresponding operations 
and outputs to another text file. */
// Written by Logan Skura, 9/6/2022
int main()
{
	// This is where we declare our variables for both calling the input and output files, and executing the arithmetic within.
	ifstream inStream;
	ofstream results;
	int num1, num2;
	char op;

	// This opens the input file. If it fails, it cancels the program.
	inStream.open ("XYnumbers.txt");
	if (inStream.fail())
	{
		cout << "Failed to open input file";
		return 1;
	}
	
	// This opens the output file. If it fails, it cancels the program.
	results.open("LSresults.txt");
	if (results.fail())
	{
		cout << "Failed to open output file";
		return 2;
	}

	// This reads the input file from left to right and performs the correct arithmetic function, terminating its reading when it reaches end of file.
	while (!inStream.eof())
	{
		inStream >> op >> num1 >> num2;
		switch (op)
		{
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			results << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;
		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			results << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;
		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			results << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			break;
		case '/':
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			results << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			break;
		case '%':
			cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
			results << num1 << " % " << num2 << " = " << num1 % num2 << endl;
			break;
		default:
			cout << op << " is not a valid operator" << endl;
			results << op << " is not a valid operator" << endl;
			break;
		}
	}

	// These close the input and output files before terminating the program.
	inStream.close();
	results.close();
	return 0;
}
