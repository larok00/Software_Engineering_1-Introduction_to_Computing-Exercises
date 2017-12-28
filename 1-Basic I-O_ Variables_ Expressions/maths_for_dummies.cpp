#include <iostream>

using namespace std;

int main(){
	
	double n1, n2, result;
	string rhetorical;
	
	cout << "Please enter the two numbers you wish to add." << endl;
	cin >> n1 >> n2;
	result = n1 + n2;
	cout << n1 << " + " << n2 << " = " << result << endl;
	cout << "Do you have nothing better to do with your time?" << endl;
	cin >> rhetorical;
	
	return 0;
}
