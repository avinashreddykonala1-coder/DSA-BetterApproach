class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxL = 0;
        for(int i=0;i<s.size();i++){
            vector<int> hash(256,0);
            for(int j=i;j<s.size();j++){
                if(hash[s[j]] == 1){
                    break;
                }
                int length = j-i+1;
                maxL = max(maxL,length);
                hash[s[j]] = 1;
            }
        }
        return maxL;
    }
};