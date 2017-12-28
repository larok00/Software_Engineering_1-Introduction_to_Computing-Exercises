#include <iostream>

using namespace std;

void comeback(string& phrase);

int main(){
	
	int i = 0;
	string 	user1, user2, user3, reply;
	
	cout << "You're the coolest!" << endl;
	
	reply = "No you are!";
	
	while( i<2 ){
		
		cin >> user1 >> user2 >> user3;
		
		if( user1 == "No" && user2 == "you" && user3 == "are!" ){
			i++;
			cout << reply << endl;
		}
		else{
		}
	}
	 while( i<3 ){
	 	
	 	cin >> user1 >> user2 >> user3;
	 	
	 	if( user1 == "No" && user2 == "you" && user3 == "are!" ){
	 		i++;
	 		comeback(reply);
	 		cout << reply << endl;
	 	}
	 }
	
	return 0;
}

void comeback(string& phrase){
	phrase = "Yes I am.";
}
