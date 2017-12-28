#include <iostream>

using namespace std;

bool even(int n);

int main(){
	
	int input;
	
	cin >> input;
	
	if( even(input) ){
		cout << "Believe it or not, even that is divisible by 2." << endl;
	}
	else{
		cout << "Hmm, I seem to have gotten a remainder, that's odd..." << endl;
	}
	
	return 0;
}

bool even( int n ){
	if( n % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
