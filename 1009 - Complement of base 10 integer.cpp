#include <math.h>
class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n==0) //edge case
            return 1;
        int m=n;  
        int mask=0;  
        while(m!=0)
        {
            mask=(mask<<1) | 1;
            m = m>>1;
        }    
        int ans = (~n)&mask;
        return ans;
    }
};
