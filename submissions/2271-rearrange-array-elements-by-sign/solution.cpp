class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
            int positive = 0, negative = 1, n = nums.size(); 
            vector<int> sortedArr(n,0); 
            for (auto num: nums){
                if(num>0){
                    sortedArr[positive] = num;
                    positive+=2;
                }
                else{
                    sortedArr[negative] = num;
                    negative+=2;
                }
            }
            return sortedArr;
        }
};
