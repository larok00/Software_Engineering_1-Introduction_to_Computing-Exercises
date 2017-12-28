#include <iostream>

using namespace std;

void the_next_day(int& d, int& m, int& y);
void conclude();

int main(){
	
	int d, m, y;
	
	cout << " Date: (e.g. 31 12 1999)" << endl;
	
	cin >> d >> m >> y;
	
	the_next_day(d,m,y);
	
	cout << "The nexy day is " << d << " " << m << " " << y << "." << endl;
	
	conclude();
	
	return 0;
}

void the_next_day(int& d, int& m, int& y){
	
	bool invalidate;
	

	
	do{
		
		
		invalidate = false;
		
		
		bool leap = y % 400 == 0 || y % 4 == 0 && y % 100 != 0,
		endof31daymonth = ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ) && d == 31, 
		endof30daymonth = ( m == 4 || m == 6 || m == 9 || m == 11 ) && d == 30,
		
		invaliday = ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ) && d > 31 || d < 1 || ( m == 4 || m == 6 || m == 9 || m == 11 ) && d > 30,
		invalidfebruaryday = !leap && d > 28 || leap && d > 29,
		invalidmonth = m > 12 || m < 1;
		
		
		if (  endof31daymonth || endof30daymonth || m == 2 && ( !leap && d == 28 || leap && d == 29 )  ){  //If the month is over and the year isn't
			m++, d = 1;
		}
		
		else if( m == 12 && d == 31 ){   // Alternatively if the year is over
			y++, m = 1, d = 1;
		}
		
		else if( invaliday || invalidfebruaryday || invalidmonth ){   //On the other hand, if the date is invalid
			invalidate = true;
			cout << "That is an invalid date." << endl;
			cin >> d >> m >> y;
		}
		
		else{   //Otherwise
			d++;
		}
		
		
		}while(invalidate == true);
}

void conclude(){
	cout << endl << "L_A_I" << endl;
	cout << "	-Tλl-ə" << endl;
}
