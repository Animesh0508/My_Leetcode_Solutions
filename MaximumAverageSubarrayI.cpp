class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max_sum = 0;
        int max_sum2 = 0;
        for(int i =0;i<=k-1;i++)
         {
           max_sum+= nums[i];
         }
         int temp =  max_sum;

         for(int j = 1; j<= nums.size()-k ;j++)
         {
            max_sum2 = temp - nums[j-1] + nums[j+k-1];
            if(max_sum2 > max_sum)
            {
                max_sum = max_sum2;
            }
            temp = max_sum2;
            
         }

         return (double)max_sum/k;
    }
};