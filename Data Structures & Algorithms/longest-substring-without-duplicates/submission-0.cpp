class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int maxlen =0;
        int l=0; int r=0;
        while(r<s.size()){
            if(seen.find(s[r])==seen.end()){
                seen.insert(s[r]);
                int currentlen= r-l+1;
                maxlen= max(maxlen, currentlen);
                r++;
            }
            else{
                seen.erase(s[l]);
                l++;
            }
            
        }
        return maxlen;
    }
};
