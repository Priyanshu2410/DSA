#include <iostream>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int sum = a+b;
	    int cnt = 0;
	    while(sum != 0){
	        int rem = sum % 10;
	        
	        if(rem == 1){
	            cnt+=2;
	        }
	        else if(rem == 2 || rem == 3 || rem == 5){
	            cnt+=5;
	        }
	        else if(rem == 0 || rem == 9 || rem == 6){
	            cnt+=6;
	        }
	        else if(rem == 4){
	            cnt += 4;
	        }
	        else if(rem == 7){
	            cnt+=3;
	        }
	        else if(rem == 8){
	            cnt+=7;
	        }
	        sum = sum / 10;
	    } 
	    cout<<cnt<<endl;
	}
	return 0;



}
