class Solution {
public:

    bool sumBelowThreshold(vector<int>& nums, int divisor, int threshold){

        long long sum = 0;
        for(int num : nums){
            sum += (num+divisor-1)/divisor;
            if (sum > threshold) return false;
        }
        return true;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1, high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            if(sumBelowThreshold(nums,mid,threshold)) high = mid - 1;
            else low = mid + 1; 
        }
        return low;
    }
};
