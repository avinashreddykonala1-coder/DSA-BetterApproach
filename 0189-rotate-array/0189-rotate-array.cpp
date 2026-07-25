class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == 0) return;
        k %= nums.size();
        vector<int> temp(nums.size());
        int firstPart = nums.size() - k;
        int firstIndex = 0;
        int lastIndex = nums.size() -1;
        for(int i=firstPart;i<nums.size();i++){
            temp[firstIndex] = nums[i];
            firstIndex++;
        }
        for(int i=firstPart-1;i>=0;i--){
            temp[lastIndex] = nums[i];
            lastIndex--;
        }
        nums = temp;
    }
};