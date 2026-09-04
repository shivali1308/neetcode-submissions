class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int left =0;
        int right = heights.size()-1;
        while(left<right){
            int currentArea= (right-left)* max(heights[right], heights[left]);
            area= max(area, currentArea);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return area;
    }
};
