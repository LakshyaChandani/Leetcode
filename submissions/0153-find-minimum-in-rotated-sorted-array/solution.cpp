class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, minimum = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            minimum = min(minimum,nums[mid]);

            //Left is Sorted
            if(nums[mid] >= nums[high]){
                minimum = min(minimum,nums[low]);
                low = mid+1;
            }

            //Right is Sorted 
            else{
                high = mid-1;
            }

        }
        return minimum;
    }
};
