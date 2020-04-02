/* Artihmetic Series */
#include <iostream>
using namespace std;

int main() {
	
	// Important local variables
	int n, total;
	
	// Header for output and input
	cout << "This program will compute the sum of all numbers from 1 to n." << endl;
	cout << "Please input a value of n: ";
	cin >> n;
	
	// Calculating the total
	for (int i = 1; i <= n; i++) {
		total += i;
	}
	
	// Printing output
	cout << "The sum of all the numbers from 1 to n is: " << total << endl;
	
	return 0;
}
