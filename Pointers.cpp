//Casey Meurer, uses pointers to display an array with four different accessing methods
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	string pets[] = {"Fish", "dog", "cat", "bird", "horse"};
	string *stringPtr;
	stringPtr = pets;
	
	
	//1. Subscripted pointers to array
	for(int count = 0; count < SIZE; count++) 
		cout << stringPtr[count]<< " ";
	cout << endl;	
	//2. Array name and subscript arithmetic
	for(int count = 0; count < SIZE; count++) 
		cout << *(pets + count) << " ";
	cout << endl;
	//3. Pointer to array and subscript arithmetic
	for (int count = 0; count < SIZE; count++)
		cout << *(stringPtr + count) << " ";
	cout << endl;
	//4. Address of each element in the array Ex. ptr = &vals[1]
	for(int count = 0; count < SIZE; count++)
	{
		stringPtr = &pets[count];
		cout << *stringPtr << " ";	
	}
	return 0;
}
