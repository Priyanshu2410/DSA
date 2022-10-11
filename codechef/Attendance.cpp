#include <iostream>
using namespace std;

int main() {
        long t;
        cin>>t;
        while(t--){
        int n;
        cin>>n;
        string arr1[n],arr2[n] ;
        
        for(int i=0;i<n;i++){
            cin>>arr1[i]>>arr2[i] ;
            
        }
        for(int i=0;i<n;i++){
            int count=0;
           
            for(int j=0;j<n;j++){
                if(arr1[j]==arr1[i]){
                    count++;
                }
            }
            if(count>1){
                cout<<arr1[i]<<" " <<arr2[i]<<endl;
            }else{
                cout<<arr1[i]<<endl;
            }
            
        }
        
        
  }     
    return 0;
}
