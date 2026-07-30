class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        vector<pair<int,int>> res;

        for(auto a : freq){
            res.push_back({a.second,a.first});
        }
        sort(res.begin(),res.end(),greater<pair<int,int>>());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }
};