class Solution {

void backtrack(int index,vector<int>& nums, vector<int>& temp, vector<vector<int>>& result){

    if(index==nums.size()){
        result.push_back(temp);
        return;
    }

    backtrack(index+1,nums,temp,result);

    temp.push_back(nums[index]);
    backtrack(index+1,nums,temp,result);
    temp.pop_back();

}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(0,nums,temp,result);
        return result;
    }
};
