/* Find Largest */
#include <iostream>
using namespace std;

int main() {
	
	// Important Local Variables
	int largest = 0, input = 1;
	
	// Program Header
	cout << "This program finds the largest integer in a list./nEnter 0 to signal the end of the list." << endl;
	
	// Getting input using a while loop
	while (input != 0) {
		
		// Getting the value in
		cout << " ? ";
		cin >> input;
		
		// Testing to see if the value is larger
		if (input > largest) {
			largest = input;
		}
	}
	
	// Printing out the output
	cout << "The largest value was " << largest << "." << endl;
	
	return 0;
}
