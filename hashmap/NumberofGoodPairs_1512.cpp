class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (const auto& it : mp) {
            int k = it.second;
            c += k * (k - 1) / 2;
        }
        return c;
    }
};
