class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int ns1 = s1.length();
        int ns2 = s2.length();
        if (ns1 > ns2) return false;

        vector<int> s1Count(26, 0), s2Count(26, 0);
        
        // Count frequencies of s1 and the first window in s2
        for (int i = 0; i < ns1; ++i) {
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }
        for (int i = 0; i < ns2 - ns1; ++i) {
            if (s1Count == s2Count) return true;
            s2Count[s2[i] - 'a']--;
            s2Count[s2[i + ns1] - 'a']++;
        }
        return s1Count == s2Count;
    }
};
