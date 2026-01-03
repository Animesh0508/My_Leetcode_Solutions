class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int pos = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != nums[pos]) {
                nums[pos+1]=nums[i];
                pos++;
            }
        }
        return pos+1;
    }
    
};
