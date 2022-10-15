#include <iostream>
#include <set>

using namespace std;

int main() {
	// your code goes here
	int t,n,i;
	cin >> t;
	while(t--){
	    cin >> n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin >> a[i];
	    }
	    set <int> b;
        for(int i=0;i<n-1;i++){
	        if(a[i]!=a[i+1]){
                b.insert(i);
                b.insert(i+1);
            }
	    }
        cout << b.size() << endl;
	}
	return 0;
}
