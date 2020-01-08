//Casey Meurer Using linear search reports if a player won the lotto with lucky numbers
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
		
	
	if (results == -1)
		cout << "You did not win.\n";
	else
	{  
		cout << "You won ";
	
	}
	return 0;
}


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

