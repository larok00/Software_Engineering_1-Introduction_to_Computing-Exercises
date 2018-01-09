#include <iostream>

using namespace std;

int main(){
	
	double repeat = 1, degrees;
	char unit;
	
	while( repeat){
		
		cout << "Degrees:" << endl;
		cin >> degrees;
		cout << "Unit: (C/F)" << endl;
		cin >> unit;
		
		if(unit == 'C'){
			cout << (degrees * 1.8) + 32 << " ";
			unit = 'F';
			cout << unit << endl;
			repeat = 0;
		}
		else if(unit == 'F'){
			cout << (degrees - 32) / 1.8 << " ";
			unit = 'C';
			cout << unit << endl;
			repeat = 0;
		}
		else{
			cout << "What??" << endl;
		}
	}
			
	return 0;
}
