class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>>um;
        
        for(string s: strs){
            string temp= s;
            sort(s.begin(), s.end());
            um[s].push_back(temp);
        }
        for(auto& vec: um){
            res.push_back(vec.second);
        }
        return res;
    }

};