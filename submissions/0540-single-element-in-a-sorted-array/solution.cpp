class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size() - 2, n = nums.size();

        if(n==1) return nums[0];
        if(nums[0] != nums[low]) return nums[0];
        if(nums[high+1] != nums[high]) return nums[high+1];

        while(low<=high){

            int mid = (low + high)/2;

            if(nums[mid] == nums[mid+1]){

                if((mid+1)%2) low = mid+1;
                else high = mid -1;
            }

            else if(nums[mid] == nums[mid-1]){
                
                if(mid%2) low = mid + 1;
                else high = mid-1;
            }
            
            else{
                return nums[mid];
            }
        }
        return -1;
    }
};
