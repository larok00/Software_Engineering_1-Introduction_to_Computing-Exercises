#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <cstdlib>
#define PAPHYSIZE 32

using namespace std;

struct full_name{
	string name;
	string surname;
	
	string namefirst(){
		stringstream ss;
		ss << name << " " << surname;
		return ss.str();
	}
	string surnamefirst(){
		stringstream ss;
		ss << surname << ", " << name;
		return ss.str();
	}
};

void conclude();

int main(){
	
	full_name a[PAPHYSIZE];
	ifstream names, surnames;
	ofstream outfile;
	
	names.open("names");
	
	if( !names.is_open() ){
		cout << "could not open names file" << endl;
		exit(EXIT_FAILURE);
	}
	
	
	surnames.open("surnames");
	
	if( !surnames.is_open() ){
		cout << "could not open surnames file" << endl;
		exit(EXIT_FAILURE);
	}
	
	
	outfile.open("Result");
	
	if( !outfile.is_open() ){
		cout << "could not open output file" << endl;
		exit(EXIT_FAILURE);
	}
	
	full_name tmp;
	int i=0,j;
	while( (names>>tmp.name) && (surnames>>tmp.surname) ){
		a[i] = tmp;
		i++;
	}
	
	string reply;
	
	cout << "Names first or surnames first?" << endl;
	cin >> reply;
	
	j=i;
	if( reply=="names" ){
		for(i=0; i<j; i++){
			outfile << a[i].namefirst() << endl;
		}
	}
	else{
		for(i=0; i<j; i++){
			outfile << a[i].surnamefirst() << endl;
		}
	}
	
	
	names.close();
	surnames.close();
	outfile.close();
	
	conclude();
	
	return 0;
}	

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
