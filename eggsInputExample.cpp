//Casey Meurer, reads numbers from a txt file, adds the numbers, prints the total to console
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	int total = 0,
		eggTotal,
		value;
	
	inputFile.open("eggs.txt");
	
	while (inputFile >> value)
	{
		total += value;
	}
	
	cout << "Total number of eggs collected " << total<< endl;
		
	return 0;
}
