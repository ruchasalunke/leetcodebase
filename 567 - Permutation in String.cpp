class Solution 
{
public:
    bool checkInclusion(string s1, string s2) 
    {
        int n = s1.size(); 
        int m = s2.size();
        if (n > m) 
            return false;
        vector<int> freqS1(26, 0), freqS2(26, 0);
        // Count frequency of characters in s1
        for (char c : s1) 
            freqS1[c - 'a']++;
        // First window in s2
        for (int i = 0; i < n; i++) 
            freqS2[s2[i] - 'a']++;
        // Compare both frequency tables
        if (freqS1 == freqS2) 
            return true;
        // Sliding window across s2
        for (int i = n; i < m; i++) 
        {
            freqS2[s2[i] - 'a']++;        // Add new character to window
            freqS2[s2[i - n] - 'a']--;    // Remove old character from window
            if (freqS1 == freqS2) return true; // Check if window matches s1
        }
        return false;
    }
};
