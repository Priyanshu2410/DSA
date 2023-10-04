//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
          map<int,int>mpp;
        for(int i=0;i<N;i++){
            mpp[arr[i]]++;
        }
       for(int i=0;i<N;i++){
           
           arr[i]=mpp[i+1];
       }
    }

	// other
	vector<int> countFrequency(int n, int x, vector<int> &nums){
     vector<int>hash(n,0);

 

    for(int i=0; i<n; i++)

    {

        hash[nums[i]-1]++;

    }
    return hash;
}
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
