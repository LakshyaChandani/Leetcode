class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int sum = 0; 
        int count = 0; 
        unordered_map<int,int> prefixsummpp;
        int n = nums.size();
        prefixsummpp[sum]++;
        for(int i = 0; i<n; i++){
            sum+=nums[i];
            if(prefixsummpp.find(sum-k) != prefixsummpp.end()){
                count+=prefixsummpp[sum-k];
            }
            prefixsummpp[sum]++;
            
        }
        return count;
    }
};
