class Solution {
public:
    bool isPalindrome(string s) {
        int left =0;
        int right = s.size()-1;
        while(left<right){
            while(left<=right && isalnum(s[left])==false){
                left++;
            }
            while(left<=right && isalnum(s[right])==false){
                right--;
            }
            if(left > right){
                return true;
            }

            if(tolower(s[left])==tolower(s[right])){
                left++;
                right--;
            }
            else{
                return false;
                break;
            }
        }
        return true;
    }
};