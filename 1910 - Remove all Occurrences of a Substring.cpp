class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
        size_t pos;
        while(s.find(part) != string::npos) //if present
        {
            pos=s.find(part);
            s.erase(pos,part.size()); //remove part
        }
        return s;
    }
};
