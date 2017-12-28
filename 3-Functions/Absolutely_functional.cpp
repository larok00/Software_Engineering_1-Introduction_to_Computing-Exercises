#include <iostream>

using namespace std;

double absolute(double input);

int main(){
	
	double n, result;
	cin >> n;
	
	result = absolute(n);
	
	cout << "| " << n << " | = " << result << endl;
	
	return 0;
}

double absolute(double input){
	
	if( input < 0 ){
		input = -input;
	}
	
	return input;
}
