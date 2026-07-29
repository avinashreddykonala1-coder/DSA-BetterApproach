class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for(char a : s){
            if(isalnum(a)){
                result += tolower(a);
            }
        }

        int left = 0;
        int right = result.size() -1 ;
        while(left<right){
            if(result[left] != result[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};