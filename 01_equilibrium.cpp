// question link: https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum = 0;
        for(auto i : nums){
            rsum += i;
        }
        // return rsum;
        int lsum = 0;

        for(int i = 0; i<nums.size(); i++){
            rsum -= nums[i];
            if(lsum == rsum){
                return i;
            }
            lsum += nums[i];
        }
        return -1;
                       
    }
};