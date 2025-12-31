class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0;
        long long res = 0;
        long long maxsum = 0;
        int size = nums.size();
        unordered_map<int, int> mp;

        for(int j =0;j<size;j++) {

            maxsum += nums[j];
            mp[nums[j]]++;

            if (j - i + 1 > k) {
                maxsum -= nums[i];
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                i++;
            }
            if (j - i + 1 == k && mp.size() == k) {
                res = max(res, maxsum);
            }
            
        }

        return res;
    }
};
