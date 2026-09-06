class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int maxcount=0;
        int r=0;
        int maxlen=0;
        vector<int>count(26,0);
        while(r<s.size()){
            count[s[r]-'A']++;
            maxcount=max(count[s[r]-'A'], maxcount);
            
        
            while(r-l+1 - maxcount>k){
                count[s[l]-'A']--;
                l++;
            }
            maxlen= max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
