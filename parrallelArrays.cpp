//Casey Meurer, uses parrall arrays to take in sales number for salsa type, 
//prints each type of salsa, quantity sold, and then total sold
#include <iostream>
using namespace std;


int main()
{
	const int SALSA_TYPES = 5;
	string type[5] = {"mild", "medium", "sweet", "hot", "zesty"};
	int sold[5];
	int total = 0;
	
	for (int index = 0; index < SALSA_TYPES; index++)
	{
		cout << "Enter number of " << type[index] << " jars sold:" << endl;
		cin >> sold[index];
	}
	
	for (int index = 0; index < SALSA_TYPES; index++)
	{
		cout << sold[index] << " jars of " << type[index] << " sold\n";
		total += sold[index];
	}
	
	cout << "total jars sold " << total << endl;
	
	return 0;
}


