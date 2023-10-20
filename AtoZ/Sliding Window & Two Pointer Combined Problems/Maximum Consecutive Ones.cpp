int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i = 0, j = 0;

  int ans = 0;

  while (j < n) {

    if (arr[j] == 1) {

    }

    else if (k > 0) {

      k--;

    } else {

      k--;

      while (k < 0 && i <= j) {

 

        if (arr[i] == 0) {

          k++;

        }

 

        i++;

      }

    }

    j++;

    ans = max(ans, j - i);
     }

 

  return ans;
}
