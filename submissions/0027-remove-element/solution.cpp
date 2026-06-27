class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) return 0;
        int k = nums.size()-1;
        if(nums[k] == val) k--;
        for(int i = k; i>=0; i--){
            if(nums[i] == val){
                swap(nums[i],nums[k]);
                k--;
            }
        }
        return k+1;
    }
};
