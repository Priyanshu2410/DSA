// 191. Number of 1 Bits
// Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(n&1)
            {
                count=count+1;
            }
             n = n >> 1 ;
        }
        return count;
    }
};