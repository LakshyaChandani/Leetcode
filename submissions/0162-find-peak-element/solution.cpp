class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 1, high = nums.size() - 2;
        if (nums.size() == 1) return 0;
        if (nums[low-1] > nums[low]) return 0;
        if (nums[high + 1] > nums[high]) return nums.size()-1;
        
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid-1] < nums[mid] && nums[mid] < nums[mid+1]) low  = mid + 1;
            else high = mid-1;
        }
        return -1;
    }
};
