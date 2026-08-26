class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>>um;
        
        for(string s: strs){
            vector<int> freq(26,0);
            string key="";
            for(int i=0; i<s.size(); i++){
                freq[s[i]-'a']++;
            }
            for(int x: freq){
                key+= to_string(x);
                key += "#";
            }
            um[key].push_back(s);
        }
        for(auto x: um){
            res.push_back(x.second);
        }
        return res;
    }
};