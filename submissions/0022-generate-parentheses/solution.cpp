class Solution {
public:
    void backtrack(int openBrackets, int closingBrackets, int n, string &temp,vector<string> &result){
        
        if(openBrackets == n && closingBrackets == n){
            result.push_back(temp);
            return;
        }

        //opens choice
        if(openBrackets<n){
            temp.push_back('(');
            backtrack(openBrackets+1,closingBrackets,n,temp,result);
            temp.pop_back();
        }

        if(closingBrackets<openBrackets){
            temp.push_back(')');
            backtrack(openBrackets,closingBrackets+1,n,temp,result);
            temp.pop_back();
        }

        return;


    }

    vector<string> generateParenthesis(int n) {
        int openBrackets =0;
        int closingBrackets = 0;
        string temp;
        vector<string> result;

        backtrack(openBrackets,closingBrackets,n,temp,result);
        return result;
    }
};
