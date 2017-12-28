#include <iostream>

using namespace std;

bool prime_(int number);

int main(){
	
	int i=0, n, all = 2;
	
	cin >> n;
	
	while( i <= n ){
		
		if( prime_(all) ){
			cout << all << " (" << i << ") | ";
			i++;
		}
		
		all++;
		
	}
	
	cout << endl;
	
	return 0;
}

bool prime_(int number){
	
	bool prime = true;
	
	int i=2;
	
	while( i * i <= number && prime ){
		
		if( number % i == 0){
			prime = false;
		}
	
		i++;
	}
	
	return prime;
}
