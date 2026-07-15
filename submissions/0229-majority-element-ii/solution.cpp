class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> elements;
        set<int> result;

        for(int num: nums){
                elements[num]++;
                if(elements[num] > n/3) result.insert(num);
        }
        vector<int> v(result.begin(),result.end());

        return v;
    }
};
