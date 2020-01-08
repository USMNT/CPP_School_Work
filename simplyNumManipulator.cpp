//Casey Meurer, displays value, asks user for a value, assigns that value to original 
//variable 
#include <iostream>
using namespace std;

//function prototypes
void getNumber(int&);

int main()
{
	int value = 5;
						
	cout << value << endl;
	getNumber(value);
	cout << value ;
	
	return 0;
}

void getNumber(int &num1)
{

	cout << "Enter a number between 1 - 100 \n";
	cin >> num1;
	
	while ( (num1 < 1 ) || (num1 > 100 ) )
	{
		cout << "Enter a value in the range 1-100: ";
		cin >> num1;
	}

}
