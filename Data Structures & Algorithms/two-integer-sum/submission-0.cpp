class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>m;
        for(int i=0;i<nums.size(); i++){
            int cur= nums[i];
            int x= target -cur;
            if(m.find(x) != m.end()){
                return {m[x],i};
            }
            m.insert({cur,i});
            
        }
        return {};

    }
};