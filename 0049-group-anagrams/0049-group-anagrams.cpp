class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;

        for(auto a : strs){
            string copy = a;
            sort(copy.begin(),copy.end());
            res[copy].push_back(a);
        }

        vector<vector<string>> ans;

        for(auto a : res){
            ans.push_back(a.second);
        }
        return ans;
    }
};