class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int suml=0, sumr=0, tot=0;
        int s=0, e=nums.size()-1, m;
        for(int i=0;i<nums.size();i++)
            tot += nums[i];
        sumr = tot;    
        for(int i=0;i<nums.size();i++)    
        {
            sumr -= nums[i];
            if(sumr == suml)
                return i;
            suml += nums[i];    
        }  
        return -1;
    }
};
