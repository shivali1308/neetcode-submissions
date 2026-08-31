class Solution {
public:
    bool isPalindrome(string s) {
        int left =0;
        int right = s.size()-1;
        while(left<right){
            while(isalnum(s[left])==false){
                left++;
            }
            while(isalnum(s[right])==false){
                right--;
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