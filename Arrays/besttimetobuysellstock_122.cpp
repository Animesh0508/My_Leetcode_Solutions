class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int p =0;
     if(prices.size() == 1) return 0;
        for(int i =0;i<prices.size()-1;i++)
        {
            int j = i+1;
            if(prices[i]>prices[j])
            {
               continue;
            }
            else if(prices[j]>prices[i] )
            {
                p+=prices[j]-prices[i];
            }
        }
        return p;
    }
};
