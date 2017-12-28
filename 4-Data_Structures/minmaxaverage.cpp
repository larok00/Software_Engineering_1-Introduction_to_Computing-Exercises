#include <iostream>
#include <vector>

using namespace std;

void conclude();

void minmaxaverage( const vector<int>& v, int& min, int& max, int& average ){
	
	
	
	for( int i = 1 ; i < v.size()-1 ; i++ )
	{
		if( v[i] < min )
		{
			min = v[i];
		}
		else if( v[i] > max )
		{
			max = v[i];
		}
		
		average = ( i * average + v[i] ) / (i+1);
	}
}

int main(){
	
	vector<int> v;
	int n, min, max, average;
	
	do{
		cin >> n;
		v.push_back(n);
	}while( n != 420 );
	
	if( v.size()>1 ){
		min = v[0];
		max = v[0];
		average = v[0];
	} else{
		min = 0;
		max = 0;
		average = 0;
	}
	
	minmaxaverage( v, min, max, average );
	
	cout <<
	"Minimum: " << min << endl <<
	"Maximum: " << max << endl <<
	"Average: " << average << endl;
	
	conlude();
	
	return 0;
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
