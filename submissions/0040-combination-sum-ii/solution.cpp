class Solution {
public:

    void generateSubsets(int index,vector<int>& candidates, int target, vector<int>& temp, vector<vector<int>>& result){

        if(target==0){
            result.push_back(temp);
            return;
        }

        if(target<0 || index==candidates.size()) return;

        temp.push_back(candidates[index]);
        generateSubsets(index+1,candidates,target-candidates[index],temp,result);
        temp.pop_back();

        while(index+1<candidates.size() && candidates[index+1]==candidates[index]) index++;
        generateSubsets(index+1,candidates,target,temp,result);

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(),candidates.end());

        vector<int> temp;
        vector<vector<int>> result;

        generateSubsets(0,candidates,target,temp,result);
        return result;

    }
};
