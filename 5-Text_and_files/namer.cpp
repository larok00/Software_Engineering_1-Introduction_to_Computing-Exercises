#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <cstdlib>

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
	
	vector<full_name> vec;
	full_name temp;
	while( (names>>temp.name) && (surnames>>temp.surname) ){
		vec.push_back(temp);
	}
	
	string reply;
	
	cout << "Names first' or surnames first?" << endl;
	cin >> reply;
	
	
	if( reply=="names" ){
		for(int i=0; i<vec.size(); i++){
			outfile << vec[i].namefirst() << endl;
		}
	}
	else{
		for(int i=0; i<vec.size(); i++){
			outfile << vec[i].surnamefirst() << endl;
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
