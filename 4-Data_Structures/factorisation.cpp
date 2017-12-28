#include <iostream>
#include <vector>

using namespace std;

void factorisation( int& n, vector<int>& v );
bool factor_of_(int n, int& i);
void conclude();

int main(){
	
	int n, i=1;
	vector<int> v;
	
	cin >> n;
	
	while( n<2 ){
		cout << "I need a positive integer bigger than 2 please." << endl;
		cin >> n;
	}
	
	factorisation(n,v);
	
	if( v.size() == 0 ){
		cout << "That is a prime number." << endl;
	}
	else{
		cout << "That number can be factorised into " << v[0];
		
		while( i < v.size()-1 ){
			cout << " , " << v[i];
			i++;
		}
		
		cout << " and " << v[i] << "." << endl;
	}
	
	conclude();
	
	return 0;
}

void factorisation( int& n, vector<int>& v ){
	
	int i = 1;
	
	if ( n == 2 || !factor_of_(n, i) ){
		return;
	}
	else{
		
		v.push_back(i);
		n = n/i;
	
		while( n != 1){
		
			i = 1;
		
			if( factor_of_(n, i) ){
				v.push_back(i);
			}
			else{
				i = n;
			
				v.push_back(i);
			}
		
			n = n/i;
		}
	}
}

bool factor_of_(int n, int& i){
	
	bool stop = false;
	
	while( i * i <= n && stop == false){
		
		i++;
		
		if( n % i == 0){
			stop = true;
		}
	
	}
	
	return stop;
	
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
