class Solution {
public:

    void generateSubsets(int index, const vector<int>& arr, int size, int target, vector<int>& temp, vector<vector<int>>& result){
        
        if(target==0 && temp.size()==size){
            result.push_back(temp);
            return;
        }

        if(target<0) return;

        if(index == arr.size()) return;

        if(temp.size()==size) return;

        //if we decide to take the num
        temp.push_back(arr[index]);
        generateSubsets(index+1,arr,size,target-arr[index],temp,result);
        temp.pop_back();

        //if we decide to not take the num
        generateSubsets(index+1,arr,size,target,temp,result);
    }

    vector<vector<int>> combinationSum3(int k, int n) {

        const vector<int> arr = {1,2,3,4,5,6,7,8,9};
        vector<int> temp;
        vector<vector<int>> result;

        generateSubsets(0,arr,k,n,temp,result);

        return result;

    }
};
