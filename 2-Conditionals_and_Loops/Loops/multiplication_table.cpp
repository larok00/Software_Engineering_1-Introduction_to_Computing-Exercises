#include <iostream>

using namespace std;

int main(){
	
	int i, j, n;
	
	cin >> n;
	
	cout << endl;
	
	cout << " " << 0 << "  ";
	for(i = 1; i <= n; i++){ // 1st Row
		cout << " " << i;
	}
	cout << endl << endl;
	
	for(j = 1; j <= n; j++){ // 1st Coloumn
		
		cout << " " << j << "  ";
		
		
		for(i = 1; i <= j; i++){ // Multiplications
			cout << " " << i*j;
		}
		
		for(i = j+1; i <= n; i++){ // Blanks
			cout << " -";
		}
		
		cout << endl;
	}
	
	return 0;
}
