#include <iostream>

using namespace std;

int main(){
	
	int n1, n2, addition, subtraction, multiplication, division, modulo;
	string rhetorical;
	
	cout << "Please enter the two numbers you wish to compute." << endl;
	cin >> n1 >> n2;
	addition = n1 + n2;
	cout << n1 << " + " << n2 << " = " << addition << endl;
	subtraction = n1 - n2;
	cout << n1 << " - " << n2 << " = " << subtraction << endl;
	multiplication = n1 * n2;
	cout << n1 << " * " << n2 << " = " << multiplication << endl;	
	division = n1 / n2;
	cout << n1 << " / " << n2 << " = " << division;
	modulo = n1 % n2;
	cout << " with a remainder of " << modulo << "." << endl;
	cout << "Do you have nothing better to do with your time?" << endl;
	cin >> rhetorical;
	
	return 0;
}
