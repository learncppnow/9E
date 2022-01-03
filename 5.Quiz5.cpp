#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int number = 0;
	cin >> number;

	int result = ((number << 1) + 5) << 1; // unambiguous even to reader
	cout << "((Number * 2) + 5) * 2= " << result << endl;
	return 0;
}