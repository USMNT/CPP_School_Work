//Casey Meurer Using binary search reports if a player won the lotto with lucky numbers
#include <iostream>
using namespace std;
int binarySearch(const int [], int, int);

const int SIZE = 10;

int main()
{
	int lucky[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 }; //lucky numbers
	int results; //holds the search results
	int draw; //holds the drawn number
	
	cout << "Please enter the winning number: ";
	cin >> draw ;
	
	results = binarySearch(lucky, SIZE, draw);
		
		
	if (results == -1)
		cout << "You did not win.\n";
	else
	{  
		cout << "You won ";
	
	}
	return 0;
}

int binarySearch(const int array[], int size, int value)
{
	int  first = 0,                     // First array element
	     last = size - 1,               // Last array element
	     middle,                        // Midpoint of search
	     position = -1;                 // Position of search value
	bool found = false;                 // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;    // Calculate midpoint
		if (array[middle] == value)     // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;         // If value is in upper half
	}
	return position;
}
