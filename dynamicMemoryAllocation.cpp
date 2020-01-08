//Casey Meurer, chpt 10.2. uses dynamic allocated memory to store an int array. 

#include <iostream>
using namespace std;

int *fillArray(int);

int main()
{	
	int *num = nullptr;
	int n, size;
	
	cout << "Enter the size of array: ";
	cin >> size;
	num = fillArray(size);
	
	for (int count = 0; count < size ; count++)
		cout << num[count] << endl;
		
	delete [] num;
	num = nullptr;
	
	return 0;
}

int *fillArray(int size)
{
	int *array = nullptr;
	
	array = new int[size];
	
	for (int count = 0; count < size; count++)
	{
		cout << "Enter an integer: ";
		cin >>array[count];		
	}
	return array;
}
