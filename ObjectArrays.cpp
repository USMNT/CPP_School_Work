//Casey Meurer, uses an object array of structures  to take in sales number for salsa type, 
//prints each type of salsa, quantity sold, and then total sold

#include <iostream>
using namespace std;

struct salsaInfo
{
	string type;
	int sold;
};
int main()
{
	const int SALSA_TYPES = 5;
	salsaInfo sales[SALSA_TYPES];
	
	string type[5] = {"mild", "medium", "sweet", "hot", "zesty"};
	int total = 0;
	
	for (int index = 0; index < SALSA_TYPES; index++)
	{
		cout << "Enter number of " << type[index] << " jars sold:" << endl;
		cin >> sales[index].sold;
		sales[index].type = type[index];
	}
	
	for (int index = 0; index < SALSA_TYPES; index++)
	{
		cout << sales[index].type << " jars of " << sales[index].sold << " sold\n";
		total += sales[index].sold;
	}
	
	cout << "total jars sold " << total << endl;
	
	return 0;
}


