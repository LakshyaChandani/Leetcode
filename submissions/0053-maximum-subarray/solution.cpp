class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        for(auto it:nums){
            if(sum<0) sum = 0;
            sum+=it;
            maxSum = max(maxSum,sum);
        }
        return maxSum; 
    }
};
