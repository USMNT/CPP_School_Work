//Casey Meurer Using bubble search sorts a grocery list
#include <iostream>
using namespace std;


void sortArray(string [], int);
void showArray(const string [], int);

int main()
{
	const int SIZE = 9;
   
	// Array of unsorted strings
	string items[SIZE] = {"eggplant", "squash", "apples", "hamburger", "pizza", "shampoo", "soap", "laundry detergent", "bacon"};

	// Display the values
	cout << "The unsorted items are:\n";
	showArray(items, SIZE);
	
	// Sort the values
	sortArray(items, SIZE);
	
	// Display them again
	cout << "The sorted items are:\n";
	showArray(items, SIZE);
	return 0;
}

/************************************************************
 *                        sortArray                         *
 * This function performs an ascending-order bubble sort on *
 * array. The parameter size holds the number of elements   *
 * in the array.                                            *
 ************************************************************/
void sortArray(string array[], int size)
{
	string  temp;
	bool madeAswap;

	do
	{	madeAswap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				madeAswap = true;
			}
		}
   } while (madeAswap);  // Loop again if a swap occurred on this pass.
}

/*************************************************************
 *                        showArray                          *
 * This function displays the contents of array. The         *
 * parameter size holds the number of elements in the array. *
 *************************************************************/
void showArray(const string array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}
