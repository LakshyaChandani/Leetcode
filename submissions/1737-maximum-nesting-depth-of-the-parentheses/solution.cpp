class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int currentDepth = 0;
        for(char c: s){
            if(c == '(') currentDepth++;
            else if(c == ')'){
                maxDepth = max(maxDepth,currentDepth);
                currentDepth--;
            }
        }
        return maxDepth;
    }
};
