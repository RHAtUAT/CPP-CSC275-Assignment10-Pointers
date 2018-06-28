// Assignment10.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
using namespace std;

int ReturnNegative(int* ptr, int input)
{
	return *ptr * -1;
}

string ReverseString(string input)
{
	reverse(input.begin(), input.end());

	return input;

}


int main()
{
	int userInput = NULL;
	string strUserInput = "";

	int* numToNeg;
	string* pointToStr;

	//Input for ReturnNegative()
	cout << "Enter a number to get its memory address and the negative of it: ";
	cin >> userInput;

	//Points to the address of the number the user inputs
	numToNeg = &userInput;

	//Displays the stuff
	cout << "Memory Address: " << numToNeg << endl;
	cout << "Negative: " << ReturnNegative(numToNeg, userInput) << endl;



	//###############################
	//## Same thing but for string ##
	//###############################

	cout << "Enter a word to recieve its address and the word reversed: ";
	cin >> strUserInput;

	//Points to the address of the word the user inputs
	pointToStr = &strUserInput;

	cout << "Memory Address: " << pointToStr << endl;
	cout << "Reversed Word: " << ReverseString(strUserInput) << endl;

	system("pause");
	return 0;
}

