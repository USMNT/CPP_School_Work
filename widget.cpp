//Casey Meurer, this program calculates the total number of widgets based on user input
//of gross loaded pallet weight and pallet weight
#include<iostream>
using namespace std;
int main()
{
	const double WIDGET_WEIGHT = 9.2;
	double palletWeight = 0.0;
	double totalWeight = 0.0;
	int widgetCount = 0.0;
	
	cout << "What is the weight of the pallet:  ";
	cin >> palletWeight;
	cout << "What is the total loaded weight of the pallet:  ";
	cin >> totalWeight;
	widgetCount = 	(totalWeight - palletWeight) / WIDGET_WEIGHT; 
	cout << "The total number of widgets is :" << widgetCount;
	return 0;
}
