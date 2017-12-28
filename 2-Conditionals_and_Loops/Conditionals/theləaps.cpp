#include <iostream>

using namespace std;

int main(){
	
	int year;
	string leap = " is not ";
	
	cout << "Enter a year please: ";
	cin >> year;
	
	if( year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		leap = " is ";
	}
	
	cout << year << leap << "a leap year." << endl;
	
	return 0;
}
