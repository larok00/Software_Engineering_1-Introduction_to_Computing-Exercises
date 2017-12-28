#include <iostream>

using namespace std;

int gcd( int a, int b );
void conclude();

int main(){
	
	int a, b, intermediate;
	
	cin >> a >> b;
	
	if( a<b ){
		intermediate = a;
		a = b;
		b = intermediate;
	}
	
	cout << "Greatest Common Divisor: " << gcd(a,b) << endl;
	
	conclude();
	
	return 0;
}

int gcd( int a, int b ){
	
	if( a%b == 0 ){
		return b;
	}
	
	return gcd( b,a%b );
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
