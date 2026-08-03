class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        vector<int> v;
        for(auto a : nums1){
            s.insert(a);
        }

        for(auto a : nums2){

            if(s.count(a) == 1){
                v.push_back(a);
                s.erase(a);
            }
        }
        return v;
    }
};