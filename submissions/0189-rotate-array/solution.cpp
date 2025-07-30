class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        if (k>=s) k%=s;
        if (s < 2 || k == 0) return;
        vector<int> temp(nums.end()-k,nums.end());
        for(int i = s-1; i>=k;i--){
            nums[i] = nums[i-k];
        }
        for(int i = 0; i<k; i++){
            nums[i] = temp[i];
        }
    }
};
