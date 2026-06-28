class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0 ,right = 0;
        int current_sum = 0;
        int minimum_sub_array_length = INT_MAX;  
        int n = nums.size();
        while(right<n){
            current_sum += nums[right];
            while(current_sum>=target){
                minimum_sub_array_length = min(minimum_sub_array_length,right-left+1);
                current_sum-=nums[left];
                left++;
            }
            right++;
        }
        if (minimum_sub_array_length == INT_MAX) return 0; // No Answer Found
        return minimum_sub_array_length;
    }
};
