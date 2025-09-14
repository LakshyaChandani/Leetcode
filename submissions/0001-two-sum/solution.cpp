class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> indexMap; 
            for(int i = 0; i< nums.size(); i++){
                int rem  = target - nums[i];
                if(indexMap.find(rem) != indexMap.end()){
                    return {indexMap[rem], i};
                }
                indexMap[nums[i]] = i;
            }
            return {};
        }
};
