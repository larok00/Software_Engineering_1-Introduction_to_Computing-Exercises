#include <iostream>

using namespace std;

int main(){
	
	int i, j, x, n;
	double x_tothe_i, result = 0;
	
	cout << "Enter x and n:" << endl;
	cin >> x >> n;
	
	for( i=1; i<=n; i++){ //result
		x_tothe_i = 1;
		for( j=0; j<i; j++ ){ //x_tothe_i
			x_tothe_i = x_tothe_i * x;
		}
		result = result + x_tothe_i;
	}
	
	cout << "The sum of the powers of " << x << " up to and including " << n << " equals " << result << "." << endl;
	
	return 0;
}
