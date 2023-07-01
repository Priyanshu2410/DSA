class Solution {
public:
    int majorityElement(vector<int>& a) {
        int size = a.size();
        int el;
        int  cont =0;
        for(int i=0;i<size;i++)
        {
            if(cont==0)
            {
                el=a[i];
                cont=1;
            }
            else if(a[i]==el)
            {
                cont++;   
            }
            else
            {
                cont--;
            }
            
        }
        int cont1=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==el)
            {
                cont1++;
            }
        }
        if(cont1>(size/2))
        {
            return el;
        }
        return -1;
    }
};