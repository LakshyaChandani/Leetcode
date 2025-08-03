class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int> indexMap; 
            for(int i = 0; i< nums.size(); i++){
                int rem  = target - nums[i];
                if(indexMap.find(rem) == indexMap.end()){
                    indexMap[nums[i]] = i;
                }
                else if(indexMap.find(rem) != indexMap.end()){
                    return {indexMap[rem], i};
                }
            }
            return {};
        }
};
