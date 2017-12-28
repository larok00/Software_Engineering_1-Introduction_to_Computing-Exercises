#include <iostream>

using namespace std;

int mpowersum(int& x, int& n);
int mpower(int x, int n);
void conclude();

int main(){
	
	int x, n, result;
	
	cin >> x >> n;
	
	result = mpowersum(x, n);
	
	cout << "The sum of " << x << "^i for all integer values of i from 1 to " << n << " equals " << result << "." << endl;
	
	conclude();
	
	return 0;
}

int mpowersum(int& x, int& n){
	
	bool done = false;
	int sum = 0, i;
	
	while( done == false ){
		if( n > 0 ){
			
			for(i=1; i <= n; i++){
				sum = sum + mpower(x, i);
			}
			
			done = true;
		}
	
		else{
			cout << "I need an integer to the power of a positive integer for this to work." << endl;
			
			cin >> x >> n;
		}	
	}
	
	return sum;
}

int mpower(int x, int n){
	
	int product = 1, i;
	
	for(i=1; i <= n; i++){
		product = product * x;
	}
	
	return product;
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
