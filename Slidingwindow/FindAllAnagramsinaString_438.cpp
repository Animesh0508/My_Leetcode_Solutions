
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.length() < p.length()) return {};

        int np = p.length();
        int ns = s.length();
        string temp = "";
        int pos = np;
        vector<int> v_result;
        std::map<char,int>m1;
        std::map<char,int>m2;
        std::map<char,int>m3;
        
        for(int i =0;i<ns;i++)
        {
            m1[s[i]]++;
        }

        for(int i =0;i<np;i++)
        {
            m2[p[i]]++;
        }

        for (int i = 0; i < np; i++)
        {
            temp.push_back(s[i]);
            m3[s[i]]++;
        }

        if(m3 == m2)
        v_result.push_back(0);
        
        
        for (int j = 1; j <= ns-np; j++)
        {
            m3.clear();

            temp.erase(0, 1);
            temp.push_back(s[pos]);
            for(int i =0;i<temp.size();i++)
            {
                m3[temp[i]]++;
            }
            if (m3 == m2)
            {
                v_result.push_back(j);
            }
            pos++; 
        }
        return v_result;
    }
};
