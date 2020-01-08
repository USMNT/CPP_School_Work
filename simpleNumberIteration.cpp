#include <iostream>
using namespace std;
int function(int);

int main()
{
	int x = 10;
	cout << function(x) << endl;
	return 0;
}

int function(int num)
{
	if(num <= 0)
			return 0;
	else
	{	
			cout << num -1 << "\t"<< num << "\t" << (num -1 ) + num << endl;
			return function(num -1) + num;
			
			}
}
