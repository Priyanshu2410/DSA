#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int count=0;
		string s,st;
		cin>>s;
		for(int i=0;i<s.length();i++){
		st=s.substr(i,3);
		if((st=="010")||(st=="101")){
			count=1;
			break;
		}
		}
		if(count==1)
		cout<<"Good"<<endl;
		else
		cout<<"Bad"<<endl;
	}
	return 0;
}