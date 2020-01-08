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
	if (books > 0) //test books are positive
	{
		switch (books)
		{ 	
			case 4:	
				points = 60;
				break;		
			case 3: 
				points = 30;
				break;
			case 2:
				points = 15;
				break;
			case 1:
				points = 5;
				break;
			case 0:
				points = 0;
				break;
			default:  			//default catches anything greater than 4
				points = 60; 
		}
	}
	else
		points = 0;
	
	cout << "Your points for the month is: " << points;
		
		
	return 0;
}
