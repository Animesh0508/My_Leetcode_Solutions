class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        char s_map[256] = {0};
        char t_map[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            if (s_map[s[i]] != t_map[t[i]]) return false;

            s_map[s[i]] = i + 1;
            t_map[t[i]] = i + 1;
        }

        return true;
    }
};
