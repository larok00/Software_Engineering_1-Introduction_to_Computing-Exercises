#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

struct dict_item{
	string word;
	string translation;
};

int dict_search( vector<dict_item> vec, string word );
void conclude();

int main(){
	
	vector<string> advec;
	string tmp;
	vector<dict_item> dictvec;
	dict_item tmp2;
	int j;
	bool something=false;
	
	ifstream ad, dict;
	ofstream outfile;
	
	ad.open("Advertisement");
	
	if( !ad.is_open() ){
		cout << "could not open advertisement file" << endl;
		exit(EXIT_FAILURE);
	}
	
	dict.open("Dictionary");
	
	if( !dict.is_open() ){
		cout << "could not open dictionary file" << endl;
		exit(EXIT_FAILURE);
	}
	
	outfile.open("Result");
	
	if ( !outfile.is_open() ){
		cout << "could not open output file" << endl;
		exit(EXIT_FAILURE);
	}
	
	while( ad >> tmp ){
		advec.push_back(tmp);
	}
	
	while( dict >> tmp2.word >> tmp2.translation ){
		dictvec.push_back(tmp2);
	}
	
	for(int i=0; i<advec.size(); i++){
		j=dict_search(dictvec, advec[i]);
		if( j==-1 ){
		}else{
			something=true;
			advec[i]=dictvec[i].translation;
		}
	}
	
	if(!something){
		outfile << "The babble is well concealed.";
	}else{
		for(int i=0; i<advec.size(); i++){
			outfile << advec[i] << " ";
		}
	}
	
	ad.close();
	dict.close();
	outfile.close();
	
	conclude();
	
	return 0;
}

int dict_search( vector<dict_item> vec, string word ){
	
	for(int i=0; i<vec.size(); i++){
		if( vec[i].word==word ){
			return i;
		}
	}
	return -1;
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
