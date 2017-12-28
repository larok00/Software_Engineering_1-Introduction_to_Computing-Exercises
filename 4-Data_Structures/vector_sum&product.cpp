#include <iostream>
#include <vector>

using namespace std;

void conclude();

void sum_of( vector<double> v1, vector<double> v2, vector<double>& sum ){
	
	int i = 0;
	
	while( i < v1.size() )
	{
		sum.push_back( v1[i] + v2[i] );
		i++;
	}
}

double product_of( vector<double> v1, vector<double> v2 ){
	
	double product = 0;
	int i = 0;
	
	while( i < v1.size() )
	{
		product = product + v1[i]*v2[i];
		i++;
	}
}

int main(){
	
	vector<double> v1, v2, sum;
	double x, y, z;
	int i;
	
	cin >> x >> y >> z;
	v1.push_back(x);
	v1.push_back(y);
	v1.push_back(z);
	
	cin >> x >> y >> z;
	v2.push_back(x);
	v2.push_back(y);
	v2.push_back(z);
	
	sum_of( v1,v2,sum );
	
	while( i < sum.size() )
	{
		cout << sum[i] << " ";
		i++;
	}
	
	cout << endl;
	
	cout << product_of( v1,v2 ) << endl;
	
	conclude();
	
	return 0;
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
