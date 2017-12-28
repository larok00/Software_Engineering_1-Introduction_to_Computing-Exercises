#include <iostream>

using namespace std;

int main(){
	
	int lower, upper, i, j, n = 0, steps;
	bool invalid;
	
	cout << "Please enter a range:" << endl;
	
	do{
		
		invalid = false;
		
		cin >> lower >> upper;
		
		if( lower <= 0 ){
			invalid = true;
			cout << "The Collatz Conjecture only holds true for natural numbers." << endl;
		}
		else if( lower > upper ){
			invalid = true;
			cout << "Please enter the lower bound first and the upper bound second." << endl;
		}
		else{
			cout << "Number\tSteps" << endl;
			
			for( i = lower; i <= upper; i++ ){
				
				n = i;
				
				cout << n << "\t";
				
				steps = 0;
				
				while( n != 1 ){
					
					if(n % 2 == 0){
						n = n/2;
					}
					else{
						n = 3*n + 1;
					}
					
					steps++;
				}
				
				cout << steps << "\t";
				for( j = 0; j < steps; j++ ){
					cout << '*';
				}
				cout << endl;
				
			}
		}
	}while( invalid == true );
	
	return 0;
}
