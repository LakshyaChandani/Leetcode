class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        if (strs.size() == 0) return "";
        if (strs.size() == 1) return strs[0];
        string first = strs[0];
        string last = strs[strs.size()-1];
        int n = min(first.size(), last.size());
        for(int i = 0; i<n; i++){
            if(first[i] != last[i]) return first.substr(0,i);
        }
        return first;
    }
};
