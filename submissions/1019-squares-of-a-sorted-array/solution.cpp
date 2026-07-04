class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sorted_array(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int k = nums.size() - 1;
        while(left<=right){
            if(abs(nums[left]) >= abs(nums[right])){
                sorted_array[k] = nums[left] * nums[left];
                left++;
                k--;
            }
            else{
                sorted_array[k] = nums[right] * nums[right];
                right--;
                k--;
            }
        }
        return sorted_array;
    }
};
