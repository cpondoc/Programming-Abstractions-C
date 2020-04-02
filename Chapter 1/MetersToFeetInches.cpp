/* Meters to Feet and Inches */
#include <iostream>
using namespace std;

int main() {
	
	// Defining important variables
	double meters, inches;
	int feet;
	
	// Preparing output and getting input
	cout << "This program converts a measurement in meters to the corresponding English distance in feet and inches." << endl;
	cout << "Please enter a distance, in meters: ";
	cin >> meters;
	
	// Performing conversions
	inches = meters / 0.0254;
	feet = int(inches / 12);
	inches -= feet * 12;
	
	// Printing output
	cout << "The distance in feet and inches is: " << feet << " feet and " << inches << " inches." << endl;
	
	return 0;
}
