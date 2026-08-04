class Solution {
public:
    void generateCombinations(int index,int target, vector<int>& candidates, vector<int>& temp, vector<vector<int>>& result){
        if(target == 0){
            result.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        if(index == candidates.size()){
            return;
        }

        temp.push_back(candidates[index]);
        generateCombinations(index,target-candidates[index],candidates,temp,result);
        temp.pop_back();

        generateCombinations(index+1,target,candidates,temp,result); // dont select

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> result;
        generateCombinations(0,target,candidates,temp,result);
        return result;
    }
};
