//{ Driver Code Starts
//Initial Template for Javaimport java.io.*;

import java.util.Scanner;

interface in1
{
    void display(int p);
}

class GFG
{
    public static void main (String[] args)
    {
        Scanner sc=new Scanner (System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
        int k= sc.nextInt();
        testClass p = new testClass();
        p.display(k);
        }
    }
}


// } Driver Code Ends
//User function Template for Java

class testClass implements in1
{
   boolean isprime(int n){
        if(n==1||n==0){
            return false;
        }
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    public void display(int k)
    {   
        // Add your code here.
        int count=0;
        for(int i=2;i<=k;i++){
            if(isprime(i)){
                count++;
            }
        }
        System.out.println(count);
    }
}

//{ Driver Code Starts.

// } Driver Code Ends