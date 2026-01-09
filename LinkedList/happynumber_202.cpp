class Solution {
public:
    int findsquare(int x)
    {
        int s =0;
        while(x >0)
        {
            int temp = x%10;
            s = s + pow(temp,2);
            x = x/10;
        }
        return s;
    }
    bool isHappy(int n) {
        unordered_set<int>hashset;
        while(hashset.find(n) == hashset.end()  )
        {
            hashset.insert(n);
            n = findsquare(n);
            if (n == 1)
            return true;
        }
        return false;
    }
};
