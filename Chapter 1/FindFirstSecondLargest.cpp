/* Find 1st and 2nd Largest */
#include <iostream>
using namespace std;

int main() {
	
	// Important local variables
	int input = 1, firstLargest = 0, secondLargest = 0;
	
	// Header for output
	cout << "This program finds the first and second largest integers in a list./nEnter 0 to signal the end of the list." << endl;
	
	// Finding the highest first and second values
	while (input != 0) {
		
		// Getting input from user
		cout << " ? ";
		cin >> input;
		
		// Checking if first largest
		if (input > firstLargest) {
			firstLargest = input;
		}
		
		// Checking if second largest
		else if (input > secondLargest) {
			secondLargest = input;
		}
	}
	
	// Printing results
	cout << "The first largest integer in the list is " << firstLargest << " while the second largest integer in the list is " << secondLargest << "." << endl;
	
	return 0;
}
