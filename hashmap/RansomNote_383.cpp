class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>magazine_map;
        for(int i =0;i<magazine.length();i++)
        {
            magazine_map[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(magazine_map.find(ransomNote[i]) != magazine_map.end())
            {
                if(magazine_map[ransomNote[i]] == 0)
                {return false;}
                magazine_map[ransomNote[i]]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
