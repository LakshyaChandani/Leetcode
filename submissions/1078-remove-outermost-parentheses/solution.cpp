class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int counter = 0;
        for(char bracket: s){
            if(bracket == '('){
                counter++;
                if(counter>1) result.push_back(bracket);
            }
            else if(bracket == ')'){
                counter--;
                if(counter>0) result.push_back(bracket);
            }
        }
        return result;
    }
};
