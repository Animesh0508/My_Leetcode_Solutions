class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 1)
            return 1;
        if (s.empty() == true)
            return 0;
        string temp = "";
        int c = s[0] - 'a';
        int counter = 2;
        int k = counter;
        int i = 0;
        int res = 0;
        unordered_map<char, int> mp;
        bool cond = true;
        for (int i = 1; i < s.length(); i++) {
            int t = s[i] - 'a';
            if (t != c) {
                cond = false;
                break;
            }
        }
        if (cond == true)
            return 1;

        for (int j = 0; j < s.length(); j++) {
            temp.push_back(s[j]);
            mp[s[j]]++;

            if (j - i + 1 > k) {
                temp.erase(0, 1);
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }
            if (j - i + 1 == k && mp.size() == k) {
                res = max(res, k);
                k++;
            }
        }
        return res;
    }
};
