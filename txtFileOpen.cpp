#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{	
	fstream inputFile;
	string text;
	string filename;
	int lineCount = 0;
	
	cout << "Enter name of text file to be opened: \n";
	cin >> filename;  
	
	inputFile.open(filename.c_str(), ios::in); 
	if(inputFile.fail())
	{
		cout << "The file was not found." <<endl;
		return 1;
	}
	
	getline(inputFile, text);
	while(inputFile)
	{
		lineCount += 1;
		getline(inputFile, text);
	}
	inputFile.close();

	inputFile.open(filename.c_str(), ios::in); 
	if(inputFile.fail())
	{
		cout << "The file was not found." <<endl;
		return 1;
	}
	
	if(lineCount > 10)
	{
		for(int count = 0; count < 10; count++)
			{
				getline(inputFile, text);
				cout << text << endl;
			}
	}
	else
	{
		for(int count = 0; count < lineCount; count++)
			{
				getline(inputFile, text);
				cout << text << endl;
			}
			
		cout << "\nThere were less than ten lines of text";
	} 
	
	inputFile.close();
	return 0;
}
