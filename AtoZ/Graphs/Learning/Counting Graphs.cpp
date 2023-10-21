int countingGraphs(int N)
{
    // Write your code here.
     int nC2=N*(N-1)/2;
   return 1<<(nC2);
}