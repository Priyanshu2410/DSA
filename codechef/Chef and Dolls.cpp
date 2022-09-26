#include <iostream>
using namespace std;


	// your code goes here

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N;
	    cin >> N;
	    int arr[N];
	    int p = 0;
	    for(int i = 0; i < N; i++)
	        cin >> arr[i];
	        
        for(int i = 0; i < N; i++)
        {
            p = p^arr[i];
        }
        cout << p << endl;
	}
	return 0;
}

