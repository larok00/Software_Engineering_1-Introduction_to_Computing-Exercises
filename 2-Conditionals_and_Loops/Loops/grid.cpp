#include <iostream>

using namespace std;

int main(){
	
	int size;
	char c;
	
	cout << "I'll start by drawing you a grid with a letter or number of your choosing: " << endl;
	cin >> c;
	cout << "And how big should this grid be? Give me a number." << endl;
	cin >> size;
	
	int i, j; //counters
	
	for( i = 0; i < size; i++ ){
		for(j = 0; j < size; j++){
			cout << " " << c;
		}
	cout << endl;
	}
	
	return 0;
}
