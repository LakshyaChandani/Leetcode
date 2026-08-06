class Solution {
public:
    void generateCombinations(int index,string& digits,vector<string>& letters, string& temp, vector<string>& result){

        if(temp.size()==digits.size()){
            result.push_back(temp);
            return;
        }

        for(char alphabet: letters[digits[index]-'0']){
            temp.push_back(alphabet);
            generateCombinations(index+1,digits,letters,temp,result);
            temp.pop_back();
        }
        
    }

    vector<string> letterCombinations(string digits) {

        vector<string> letters = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        vector<string> result;
        if(digits.empty()) return result;
        generateCombinations(0,digits,letters,temp,result);
        return result;
    }
};
