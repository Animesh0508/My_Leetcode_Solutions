class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string bal = "balloon";
        int minVal = INT_MAX;

        unordered_map<char, int> mp_balloon;
        for (int i = 0; i < bal.length(); i++) {
            mp_balloon[bal[i]]++;
        }
        unordered_map<char, int> mp;
        for (int i = 0; i < text.length(); i++) {
            mp[text[i]]++;
        }
        for (auto &it : mp_balloon) {
            char ch = it.first;
            int required = it.second;
            int available = mp[ch];

            minVal = min(minVal, available / required);
        }
        
    return minVal;
    }
};
