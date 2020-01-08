//Casey Meurer, takes a password and verifies it. 
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std; 


int main()
{
     const int LENGTH = 7; 		// Maximum length for string
     char line[LENGTH];      	// Array of char
   	 int wordcount = 0; 		//word accumultor
   	 bool pass, length, upper, lower, digit = false; 		//valid password flag
     // Read a string into the character array
     cout << "Enter a password " 
          <<  LENGTH-1 << " characters:\n";
     cin.getline(line, LENGTH);
     
	if(strlen(line) == 6)
    	length = true;

	for(int index = 0; line[index] != '\0'; index++)     
    {
		if(!islower(line[index]))
        	upper = true;	
		
		if(islower(line[index]))
        	lower = true;	
        	
		if(isdigit(line[index]))
			digit = true;	
	}
	
	if (length && upper && lower && digit == true)
		pass = true;
	else 
	{
		cout << "The password must: \n";
		if (!length)
			cout << "be 6 characters long\n";
		if(!upper)
			cout << "include an upper case letter\n";
		if(!lower)
			cout << "include a lower case letter\n";
		if(!digit)
			cout << "include a digit\n";
	}	
	 return 0;
}

