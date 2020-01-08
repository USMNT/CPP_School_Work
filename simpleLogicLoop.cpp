//Casey Meurer, takes a users input for number of books purchased for month,
//determines number of points, and returns points. 

#include <iostream>
using namespace std;

int main()
{
	int books;
	int points;
	
	cout << "Number of books purchased?";
	cin >> books;
	
	if (books >= 4)
		points = 60;
	else if (books == 3)
		points = 30;
	else if (books == 2)
		points = 15;
	else if (books == 1)
		points = 5;
	else if (books == 0)
		points = 0;
	
	cout << "Your points earn is " << points;
		
		
	return 0;
}
