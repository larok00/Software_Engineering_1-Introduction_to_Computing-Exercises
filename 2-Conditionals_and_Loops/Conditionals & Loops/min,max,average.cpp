#include <iostream>

using namespace std;

int main(){
	
	
	int i = 0;
	double n, min, max, average;
	char desire;
	bool repetition, unclear;
	
	
	cout << "Let us begin." << endl;
	cout << "		-Tλl-ə" << endl;
	
	
	cin >> n;
	min = max = average = n; //Initialisation
	cout << "So far the minimum value is " << min << ",the maximum value is " << max << ",the average is " << average << "." << endl;
	cout << "Would you like to continue? (y/n)" << endl; // Repetition check - Start
	
	do{
		
		unclear = false;
		
		cin >> desire;
		
		if( desire == 'y' ){
			repetition = true;
		}
		else if( desire == 'n' ){
			repetition = false;
		}
		else{
			unclear = true;
			cout << "Sorry, I don't think your form of reply was eligible to me. Please try answering with a 'y/n'." << endl;
		}
	}while( unclear == true ); //Repetition check - End
	
	
	while( repetition == true ){ //Repetition
		
		cin >> n;
		
		if(n<min){
			min = n;
		}
		else if(n>max){
			max = n;
		}
		
		i++;
		average = ( average*i + n ) / ( i + 1 );
		
		cout << "So far the minimum value is " << min << ",the maximum value is " << max << ",the average is " << average << "." << endl;
		cout << "Would you like to continue? (y/n)" << endl; //Repetition check (while repeating) - Start
		
		do{
			
			unclear = false;
			
			cin >> desire;
			
			if( desire == 'y' ){
				repetition = true;
			}
			else if( desire == 'n' ){
				repetition = false;
			}
			else{
				unclear = true;
				cout << "Sorry, I don't think your form of reply was ligible to me. Please try answering with a 'y/n'." << endl;
			}
		}while( unclear == true ); //Repetition check (while repeatiing) - End
	}
	
	
	cout << "Very well." << endl;
	
	
	return 0;
}
