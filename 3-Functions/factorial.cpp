#include <iostream>

using namespace std;

int factorial(int n);


int main()
{
	int n;
	
	cout << "Yo wassup. Throw a numba' at me." << endl;
	cout << "-Tλl-ə" << endl;
	
	cin >> n;
	
	while( n<0 ){
		cout << "Needs to be a positive integer dawg." << endl;
		cin >> n;
	}
	
	cout << factorial(n) << endl;
	
	cout << endl << "L_A_I" << endl;
	
	return 0;
}

int factorial(int n)
{
	int result = 1;
	
	if( n==0 ){
		return result;
	}
	
	result = n * factorial(n-1);
	return result;
}
