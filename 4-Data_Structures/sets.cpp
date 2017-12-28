#include <iostream>
#include <vector>

using namespace std;

bool repetition( int n, vector<int> v );
vector<int> set_of( vector<int> v );
vector<int> union_of( vector<int> v1, vector<int> v2 );
vector<int> intersection_of( vector<int> v1, vector<int> v2 );
bool subset_of( vector<int> v1, vector<int> v2 );

void conclude();

int main(){
	
	//initialization
	
	vector<int> v1, v2, the_union, the_intersection;
	int n, i=0;
	
	//input of vectors
	
	do{
		cin >> n;
		v1.push_back(n);
	}while( n!=0 );
	
	do{
		cin >> n;
		v2.push_back(n);
	}while( n!=0 );
	
	//converting vectors into sets
	
	v1 = set_of(v1);
	v2 = set_of(v2);
	
	//the union
	
	cout << "Union: ";
	
	the_union = union_of(v1,v2);
	
	while( i<the_union.size() ){
		cout << the_union[i] << " ";
		i++;
	}
	
	cout << endl;
	
	//the intersection
	
	cout << "Intersection: ";
	
	the_intersection = intersection_of(v1,v2);
	
	i=0;
	
	while( i<the_intersection.size() ){
		cout << the_intersection[i] << " ";
		i++;
	}
	
	cout << endl;
	
	//subset enquiry
	
	cout << "The first set ";
	
	if( subset_of(v1,v2) ){
		cout << "is ";
	} else{
		cout << "isn't ";
	}
	
	cout << "a subset of the second set." << endl;
	
	//termination
	
	conclude();
	
	return 0;
}

bool repetition( int n, vector<int> v ){
	
	int i=0;
		
	while( i<v.size() ){
		
		if( n == v[i] ){
			return true;
		}
		
		i++;
	}
	
	return false;
}

vector<int> set_of( vector<int> v ){
	
	vector<int> refined;
	int i=1, j;
	
	refined.push_back( v[0] );
	
	while( i<v.size()-1 ){
		
		if( !repetition( v[i], refined ) ){
			refined.push_back( v[i] );
		}
		
		i++;
	}
	
	return refined;
}

vector<int> union_of( vector<int> v1, vector<int> v2 ){
	
	int i=0;
	
	while( i<v1.size() ){
		
		if( !repetition( v1[i], v2 ) ){
			v2.push_back( v1[i] );
		}
		
		i++;
	}
	
	return v2;
}

vector<int> intersection_of( vector<int> v1, vector<int> v2 ){
	
	vector<int> intersection;
	int i=0;
	
	while( i<v1.size() ){
		
		if( repetition( v1[i], v2 ) ){
			intersection.push_back( v1[i] );
		}
		
		i++;
	}
	
	return intersection;
}	

bool subset_of( vector<int> v1, vector<int> v2 ){
	
	int i=0;
	
	while( i<v1.size() ){
		
		if( !repetition( v1[i], v2 ) ){
			return false;
		}
		
		i++;
	}
	
	return true;
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
