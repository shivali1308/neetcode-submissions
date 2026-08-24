class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         unordered_set<int> ust;
        for(int val: nums){
            if(ust.find(val)!= ust.end()){
                return true;
            }
            else{
                ust.insert(val);
            }
        }
        return false;
    }
};