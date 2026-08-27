class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto x: nums){
            freq[x]++;
        }
        int n= nums.size();
        vector<vector<int>> bucket(n+1);
        for(auto x:freq){
            bucket[x.second].push_back(x.first);
        }
        vector<int>res;
        for(int i=n; i>=1;i--){
            for(int x: bucket[i]){
                res.push_back(x);
                if(res.size()==k)
                    return res;
            }
        }
        return res;
    }
};