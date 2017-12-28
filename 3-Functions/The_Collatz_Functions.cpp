#include <iostream>

using namespace std;

int collatzstats(int n, int& max);
void nextcollatz(int& n);
void conclude();

int main(){
	
	int lower, upper, i, n = 0, steps, max;
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
			cout << "Number\tSteps\tMaximum Number Reached" << endl;
			
			for( i = lower; i <= upper; i++ ){
				
				n = i;
				
				cout << n << "\t";
				
				max = n;
				
				steps = collatzstats(n, max);
				
				cout << steps << "\t" << max;
				
				cout << endl;
				
			}
		}
	}while( invalid == true );
	
	conclude();
	
	return 0;
}

int collatzstats(int n, int& max){
	
	int steps = 0;
	
	while( n != 1 ){
		
		nextcollatz(n);
		
		if( n>max ){
			max = n;
		}
		
		steps++;
	}
	
	return steps;
}

void nextcollatz(int& n){
	
	if(n % 2 == 0){
		n = n/2;
	}
	else{
		n = 3*n + 1;
	}
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
