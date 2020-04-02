/* Celsius to Fahrenheit */
#include <iostream>
using namespace std;

int main() {
	
	// Varaibles to hold temperatures
	double celsius, fahrenheit;
	
	// Header for Output and Getting Input
	cout << "This program converts a Celsius temperature to Fahrenheit." << endl;
	cout << "Please enter a temperature, in Celsius: ";
	cin >> celsius;
	
	// Conversion
	fahrenheit = 1.8 * celsius + 32;
	
	// Printing final results
	cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
	
	return 0;
}
