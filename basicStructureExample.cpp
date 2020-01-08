//Casey Meurer. Uses strutures to print weather related stuff 
#include <iostream>
using namespace std;

struct TempScale
{
	double fahrenheit,
			celsius;
};

struct Reading
{
	int windSpeed;
	double humidity;
	TempScale temperature;
};

int main()
{
	Reading today;
	
	today.windSpeed = 37;
	today.humidity = 32;
	today.temperature.fahrenheit = 32;
	today.temperature.celsius = 0;
	
	cout << "Windspeed " << today.windSpeed << " mph \n";
	cout << "Humidity " << today.humidity << "%\n";
	cout <<"Fahrenheit temperature: " << today.temperature.fahrenheit << " degrees \n";
	cout << "Celsius temperature: " << today.temperature.celsius << " degrees \n";
	
	return 0;
}


