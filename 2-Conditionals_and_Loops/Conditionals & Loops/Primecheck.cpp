#include <iostream>

using namespace std;

int main(){
	
	int number, i = 2;
	bool prime = true;
	
	cout << "Enter number: ";
	cin >> number;
	cout << endl;
	
	//If it had a factor above its root,
	//Then it would have a corresponding factor less than the root.
	//Hence, we don't need to look for factors higher than the root.
	//So when i^2 is bigger than the number the process becomes redundant.
	while( i * i <= number && prime ){
		
		if( number % i == 0){
			prime = false;
		}
		
		i++;
	}
	
	if( prime ){
		cout << "It is a prime." << endl;
	}
	else{
		cout << "It is not a prime." << endl;
	}
	
	return 0;
}
