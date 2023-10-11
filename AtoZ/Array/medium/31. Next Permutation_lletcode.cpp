class Solution {
public:
       vector<int> nextPermutation(vector<int>& A) {
           int n=A.size();
        int ind = -1; 
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {

            ind = i;
            break;
        }
    }
    if (ind == -1) {

        reverse(A.begin(), A.end());
        return A;
    }
    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }
    reverse(A.begin() + ind + 1, A.end());

    return A;
    }

       // builtin function is also available
              
       #include<iostream>
       #include<vector>
       #include<algorithm>
       
       vector<int> nextGreaterPermutation(vector<int> &A) {
           // Write your code here.
           int n = A.size();
           next_permutation(A.begin(), A.end());
           return A;
       }
};
