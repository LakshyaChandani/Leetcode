class Solution {
public:
    void generateSubsets(int index,vector<int>& nums,vector<int>& temp, vector<vector<int>>& result){

        if(index==nums.size()){
            result.push_back(temp);
            return;
        }
        
        temp.push_back(nums[index]);
        generateSubsets(index+1,nums,temp,result);
        temp.pop_back();

        while(index+1<nums.size() && nums[index+1]==nums[index]) index++;
        generateSubsets(index+1,nums,temp,result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<int> temp;
        vector<vector<int>> result;

        generateSubsets(0,nums,temp,result);

        return result;
    }
};
