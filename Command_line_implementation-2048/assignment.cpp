#include <iostream>
#include <fstream>
#include <cstdlib>
#define GRIDSIZE 32

using namespace std;

bool play( int a[], int b[], char tmp );
bool sameness( int a[], int b[] );
void print( int a[], bool same );
void swipe( int a[], int increment );
int next_non_zero( int a[], int& point, int increment, int j );
void new_piece( int a[], int b[], bool same );
bool check_game_over( int a[] );

int main(){
	
	string string_tmp;
	char char_tmp;
	bool game_over = false;
	int i=0, j;
	int a[GRIDSIZE], b[GRIDSIZE];
	ifstream infile;
	
	cout << "enter initial configuration file name:" << endl;
	cin >> string_tmp;

	infile.open(string_tmp.c_str());

	if( !infile.is_open() ){
		cout << "file not found, using default start configuration" << endl;
		while(i<15){
			a[i]=0;
			i++;
		}
		a[i]=2;
	}
	else{
		while(infile >> j){
			a[i] = j;
			i++;
		}
	}
	
	infile.close();
	
	print(a, false);
	
	do{
		cin >> char_tmp;
		
		game_over = play( a, b, char_tmp );
		
	}while( !game_over );
	
	cout << "game over" << endl;
	
	return 0;
}

bool play( int a[], int b[], char tmp ){
	
	int i;
	bool same;
	
	if( tmp=='w' ) i=4;
	else if( tmp=='a' ) i=1;
	else if( tmp=='s' ) i=-4;
	else if( tmp=='d' ) i=-1;
	else i=0;
	
	swipe(a,i);
	
	same=sameness(a,b);
	
	new_piece(a,b,same);
	
	print(a,same);
	
	return check_game_over(a);
}

void swipe( int a[], int increment){
	
	int point, i, j;
	bool go1=true;
	
	if( increment>0 ) point=0;
	else if( increment<0 ) point=15;
	else go1=false;
	
	if( go1==true ){
		for(i=0; i<4; i++){
			j=0;
			while (j<3){
				j=next_non_zero( a, point, increment, j );
			}
			
			point += (increment%4) - 11*((increment+1)%2);
		}
	}
}

int next_non_zero( int a[], int& point, int increment, int j ){
	
	int i;
	for( i=1; i<(4-j); i++){
		if( a[point+i*increment]!=0 ){
			if( a[point]==0 ){
				a[point] = a[point+i*increment];
				a[point+i*increment]=0;
			}
			else{
				if( a[point+i*increment]==a[point] ){
					a[point] = 2*a[point];
					a[point+i*increment]=0;
				}
				else if( i=1 ){}
				else{
					a[point+increment]=a[point+i*increment];
					a[point+i*increment]=0;
				}
			
				point += increment;
				j++;
			}
			return j;
		}
	}
	i--;
	point += i*increment;
	return 3;
}	

bool sameness( int a[], int b[] ){
	
	for(int i=0; i<16; i++){
		if( b[i]!=a[i] ){
			return false;
		}
	}
	
	return true;
}

void new_piece( int a[], int b[], bool same ){
	
	if(!same){
		int i, j=0;
		for( i=0; i<16; i++ ){
			if(a[i]==0) j++;
		}
		j = rand() % j + 1;
		do{
			i--;
			if(a[i]==0) j--;
		}while(j > 0);
		a[i]=2;
	}
	
	for(int i=0; i<16; i++){
		b[i]=a[i];
	}
}

void print( int a[], bool same ){
	
	int i;
	
	if(!same){
		for(i=0; i<4; i++){
			for(int j=0; j<4; j++){
				cout << a[4*i+j] << "\t";
			}
		
			cout << endl;
		}
	
		cout << endl;
	}
}

bool check_game_over( int a[] ){
	
	for(int i=0; i<16; i++){
		if( a[i]==0 || a[i+1]==a[i] || a[i-1]==a[i] || a[i-4]==a[i] || a[i+4]==a[i] ) return false;
	}
	
	return true;
}
