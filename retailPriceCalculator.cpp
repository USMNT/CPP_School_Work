//Casey Meurer, takes a wholesale price and mark up percentage, calculates a retail price 
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double calculateRetail(double x, double y);

int main()
{
	double wholesale,
			markup;
			
	cout << "Enter wholesale cost: \n";
	cin >> wholesale;
	cout << "Enter mark up percentage: \n";
	cin >> markup;
	
	cout << "The retail price for the item should be " << fixed << setprecision(2) << calculateRetail(wholesale, markup); 		
	return 0;
}

double calculateRetail(double num1, double num2)
{
	return num1 + (num2 / 100);
}
