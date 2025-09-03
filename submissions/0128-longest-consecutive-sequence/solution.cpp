class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int size = nums.size();
        if(size==0) return 0;
        int longest = 0;

        for(int i = 0; i<size; i++){
            st.insert(nums[i]);
        }

        for(auto it: st){
            if(st.find(it-1) == st.end()){
                int count = 1;
                int curr = it; 
                while(st.find(curr+1)!=st.end()){
                    count++;
                    curr++;
                }
                longest = max(count, longest);
            }
        }
        return longest; 
    }
};
