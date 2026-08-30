class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>seen;
        for(int i: nums){
            seen.insert(i);
        }
        int  longest=0;
        int num;
        int current;
        for(int i=0; i<nums.size(); i++){
            int count =1;
            num=nums[i];
            if(seen.find(num-1)!= seen.end()){
                continue;
            }
            else{
                current = num;
            }
            while(seen.find(current + 1) != seen.end()) {
                current++;
                count++;
            }
            if(count>longest){
                longest=count;
            }
            
        }
        return longest;
    }
};