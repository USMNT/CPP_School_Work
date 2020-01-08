//Casey Meurer, takes a string and returns the number of words. 
#include <iostream>
#include <cstring>
using namespace std; 


int main()
{
     const int LENGTH = 80;  	// Maximum length for string
     char line[LENGTH];      	// Array of char
   	 int wordcount = 0; 		//word accumultor
   	
     // Read a string into the character array
     cout << "Enter a sentence of no more than " 
          <<  LENGTH-1 << " characters:\n";
     cin.getline(line, LENGTH);

	
     // Loop through the array printing each character
     for(int index = 0; line[index] != '\0'; index++)
     {
        
        if( line[index]==' ')
        	wordcount += 1;
        
     }
     cout << "There are " << wordcount + 1 << " words in that sentence\n";
     return 0;
}



