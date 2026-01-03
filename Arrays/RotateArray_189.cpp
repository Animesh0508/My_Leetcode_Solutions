class Solution {
    void swap_myarray(vector<int>& nums,int i, int j)
    {
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;j--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
         if(1 == nums.size())return;
         if(k < nums.size())
         {
         swap_myarray(nums, 0 ,nums.size()-1 );
         swap_myarray(nums, 0 , k-1);
         swap_myarray(nums,k,nums.size()-1);
         }
         else
         {
          int c = k%nums.size();
         swap_myarray(nums, 0 ,nums.size()-1 );
         swap_myarray(nums, 0 , c-1);
         swap_myarray(nums,c,nums.size()-1);
         }
    }
};
