#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
        sort(a,a+n);
        int count=1;
        for(int j=0;j<n-1;j++){
            if(a[j]!=a[j+1]){
                count=count+1;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
