#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int range;
	cout << "THIS PROGRAM WILL PRINT THE MULTIPLICATION CHART FOR YOU BASED ON YOUR DESIRED RANGE" << endl;

	cout << "Enter range:";
	cin >> range;

	cout << setw(4) << "X"; 
	for (int multiplicant = 1; multiplicant <= range; multiplicant++) {
		cout << setw(4) << multiplicant;
	}
	cout << endl;

	for (int newline = 1; newline <= range; newline++) {
		cout << setw(4) << newline;
		for (int numbers = 1; numbers <= range; numbers++) {
			cout << setw(4) << numbers * newline;
		}
		cout << endl;
	}
}