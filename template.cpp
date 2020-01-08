#include <iostream>
using namespace std;
int searchList(const int [], int, int);

const int SIZE = 10;

int main()
{
	int lucky[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 }; //lucky numbers
	int results; //holds the search results
	int draw; //holds the drawn number
	
	cout << "Please enter the winning number: ";
	cin >> draw ;
	
	results = searchList(lucky, SIZE, draw);
		
		// If searchList returned -1, 100 was not found
	if (results == -1)
		cout << "You did not win.\n";
	else
	{  // Otherwise results contains the subscript of
	   // the first 100 found in the array
		cout << "You won ";
		cout << (results + 1) << ".\n";
	}
	return 0;
}

/*****************************************************************
 *                           searchList                          *
 * This function performs a linear search on an integer array.   *
 * The list array, which has size elements, is searched for      *
 * the number stored in value. If the number is found, its array *
 * subscript is returned. Otherwise, -1 is returned.             *
 *****************************************************************/
int searchList(const int list[], int size, int value)
{
	int index = 0;         // Used as a subscript to search array 
	int position = -1;     // Used to record position of search value 
	bool found = false;    // Flag to indicate if the value was found 

	while (index < size && !found)
	{
		if (list[index] == value) // If the value is found
		{
			found = true;          // Set the flag 
			position = index;      // Record the value's subscript 
		}
		index++;                  // Go to the next element 
	}
	return position;             // Return the position, or -1 
}

