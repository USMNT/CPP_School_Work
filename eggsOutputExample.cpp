//Casey Meurer, takes a total number of days for data collection,
//takes an integer for each day, writes each input to line of txt file
#include <iostream>
#include <fstream>
using namespace std;


int main()
{	
	int days;
	int count = 0;
	int eggs = 0;
	int eggInput; //number of eggs for day
	
	ofstream outputFile;
	
	outputFile.open("eggs.txt");
	
	cout << "How many days of data is to be collected?";
	cin >> days;

 	while (count < days)
		{
			cout << "How many eggs were gathered on day " << count + 1 << "?\n";
			cin >> eggInput;
			//write input to file
			outputFile << eggInput << endl;
			eggs += eggInput;
			
			count++;
		}
	outputFile.close();
	return 0;
}
