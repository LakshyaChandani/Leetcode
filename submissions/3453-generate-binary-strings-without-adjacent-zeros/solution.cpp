class Solution {
public:
    void backtrack(int n, string &temp, vector<string> &result){
        
        if(temp.size()==n){
            result.push_back(temp);
            return;
        }

        if(temp.size()<n && (temp.empty() || temp.back() == '1')){
            temp.push_back('0');
            backtrack(n,temp,result);
            temp.pop_back();
        }

        if(temp.size()<n){
            temp.push_back('1');
            backtrack(n,temp,result);
            temp.pop_back();
        }

        return;
    }

    vector<string> validStrings(int n) {
        vector<string> result;
        string temp;
        backtrack(n,temp,result);
        return result;        
    }
};
