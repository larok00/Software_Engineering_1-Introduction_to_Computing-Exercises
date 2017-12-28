#include <iostream>

using namespace std;

int main(){

	int n;
	char repetition = 'y';
	
	cout << "Please, allow me to compute:" << endl;
	
	do{
		
		cin >> n;
		
		if(n % 2 == 0){
			cout << n << " is an even number." << endl;
		}
		else{
			cout << n << " is an odd number." << endl;
		}
		
		cout << "Any other numbers you wish processed? (y/n)" << endl;
		cin >> repetition;
		
	} while(repetition == 'y');
	
	cout << "Then, goodbye." << endl;
	
	return 0;
}
