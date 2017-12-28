#include <iostream>
#include <fstream>
#include <cstdlib>
#define PAPHYSIZE 32

using namespace std;

struct point{
	double x;
	double y;
};

void conclude();

int main(){
	
	point a[PAPHYSIZE];
	point tmp, tmp2;
	int i=0, j=0;
	
	ifstream infile;
	
	infile.open("points");
	
	if( !infile.is_open() ){
		cout << "could not open input file" << endl;
		exit(EXIT_FAILURE);
	}
	
	while(infile >> tmp.x >> tmp.y){
		a[i] = tmp;
		i++;
	}
	
	cin >> tmp.x >> tmp.y;
	for(i--; i>=0; i--){
		tmp2.x = a[i].x - tmp.x;
		tmp2.y = a[i].y - tmp.y;
		if(tmp2.x<0) tmp2.x=-tmp2.x;
		if(tmp2.y<0) tmp2.y=-tmp2.y;
		if( (tmp2.x+tmp2.y) < (a[j].x+a[j].y) ){
			j=i;
		}
	}
	
	cout << endl << a[j].x << " " << a[j].y << endl;
	
	infile.close();
	conclude();
	
	return 0;
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
