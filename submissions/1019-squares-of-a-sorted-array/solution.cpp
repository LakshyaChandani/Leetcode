class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> sorted;
        for(int num:nums){
            if(num>=0) pos.push_back(num*num);
            else neg.push_back(num*num);
        }
        int p = 0;
        int n = neg.size()-1;
        while (p<pos.size() && n>=0){
            if (pos[p]<=neg[n]){
                sorted.push_back(pos[p]);
                p++;
            }
            else {
                sorted.push_back(neg[n]);
                n--;
            }
        }
        while (p<pos.size()){
            sorted.push_back(pos[p]);
            p++;
        }

        while (n>=0){
            sorted.push_back(neg[n]);
            n--;
        }

        return sorted;
    }
};
