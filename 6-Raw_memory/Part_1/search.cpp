#include <iostream>
#include <fstream>
#include <cstdlib>
#define PAPHYSIZE 32

using namespace std;

void conclude();

int main(){
	
	int a[PAPHYSIZE];
	
	ifstream infile;
	ofstream outfile;
	
	infile.open("integers");
	
	if( !infile.is_open() ){
		cout << "could not open input file" << endl;
		exit(EXIT_FAILURE);
	}
	
	int tmp, i=0;
	while (infile >> tmp){
		a[i] = tmp;
		i++;
	}
	
	cin >> tmp;
	cout << endl;
	for(i--; i>=0; i--){
		if(a[i]==tmp){
			cout << i << endl;
		}
	}
	
	infile.close();
	conclude();
	
	return 0;
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
