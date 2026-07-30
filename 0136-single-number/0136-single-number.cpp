class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto a : freq){
            if(a.second == 1){
                return a.first;
            }
        }
        return 0;
    }
};