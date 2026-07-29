class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i =0; i<haystack.size();i++){
            int j = 0;
            int k = i;
            while(haystack[k] == needle[j] && j<needle.size() && k<haystack.size()){
                k++;
                j++;
            }
            if(j==needle.size()) return i;
        }
        return -1;
    }
};
