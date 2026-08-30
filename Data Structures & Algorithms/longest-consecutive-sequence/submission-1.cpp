class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longest = 0;

        for (int n : nums) {

            // Check if n is the start of a sequence
            if (numSet.find(n - 1) == numSet.end()) {

                int length = 0;

                while (numSet.find(n + length) != numSet.end()) {
                    length++;
                }

                longest = max(length, longest);
            }
        }

        return longest;
    }
};