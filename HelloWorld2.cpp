// HelloWorld2.cpp 
// This program prints out the greeting "Hello World", the value of x, and the string statement for the length of x
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x{ 5 }; //initialize and set x to 5

	string helloLength = "The length of the word 'Hello' is"; // first part of the statement to be displayed on screen
	
	string helloLong = "letters long."; // second part of the statement to be displayed after int x is shown

    std::cout << "Hello World!\n";

	std::cout << "\n";

	std::cout << helloLength << " " << x << " " << helloLong << '\n';

	return 0;
}
