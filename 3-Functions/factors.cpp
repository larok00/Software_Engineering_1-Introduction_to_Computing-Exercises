#include <iostream>

using namespace std;

bool factor_of_(int n, int& i);

void conclude();

main(){
	
	int number, i=1;
	
	cin >> number;
	
	if ( number == 2 || !factor_of_(number, i) ){
		cout << "That is a prime number." << endl;
	}
	else{
		
		cout << "That number can be factorised into " << i;
		number = number/i;
		
		while( number != 1){
			
			i = 1;
			
			if( factor_of_(number, i) ){
				if( number/i != 1 ){
					cout << ", " << i;
				}
				else{
					cout << " and " << i << "." << endl;
				}
			}
			else{
				i = number;
				
				cout << " and " << i << "." << endl;
			}
			
			number = number/i;
		}
	
	}
	
	conclude();
	
	return 0;
}
	
bool factor_of_(int n, int& i){
	
	bool stop = false;
	
	while( i * i <= n && stop == false){
		
		i++;
		
		if( n % i == 0){
			stop = true;
		}
	
	}
	
	return stop;
	
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}

