#include <iostream>

using namespace std;

int main(){
	
	int i, x, n;
	double result = 1;
	
	cin >> x >> n;
	
	if( n<0 ){
		for( i=0; i>n; i-- ){
			result = result / x;
		}
	}
	else{
		for( i=0; i<n; i++ ){
			result = result * x;
		}
	}
	
	cout << result << endl;
	
	return 0;
}
