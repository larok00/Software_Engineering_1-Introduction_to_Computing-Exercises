#include <iostream>

using namespace std;

int main(){
	
	int lower, upper, guess;
	char feedback;
	
	cout << "Give me a lower bound and an upper bound." << endl <<
	"						-Tλl-ə" << endl;
	
	cin >> lower >> upper;
	
	guess = (lower + upper) / 2;
	cout << "Let me guess... " << guess  << "?" << endl <<
	"Help me refine my estimation by telling me if the integer you entered is higher, lower or equal to my guess. ( h/l/e respectively )" << endl;
	
	
	while( feedback != 'e' ){
		
		cin >> feedback;
		
		if( guess == upper-1 && feedback == 'h' ){
			guess++;
			cout << guess << "?" << endl;
		}
		else if( guess == lower+1 && feedback == 'l' ){
			guess--;
			cout << guess << "?" << endl;
		}
		else if( feedback == 'h' ){
			lower = guess;
			guess = (lower + upper) / 2;
			cout << guess << "?" << endl;
		}
		else if( feedback == 'l' ){
			upper = guess;
			guess = (lower + upper) / 2;
			cout << guess << "?" << endl;
		}
		else if( feedback = 'e' ){
		}
		else{
			cout << "I'm afraid I don't understand what you mean." << endl;
		}
				
		
	}
	
	cout << endl << "L_A_I" << endl;
	
	return 0;
}
