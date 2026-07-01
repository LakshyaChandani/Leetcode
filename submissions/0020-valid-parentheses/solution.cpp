class Solution {
public:
    bool isValid(string s) {
        stack<int,vector<int>> brackets_stack;
        for(auto bracket:s){
            if(brackets_stack.empty()) brackets_stack.push(bracket);
            
            else if(brackets_stack.top() == '(' && bracket == ')'){
                brackets_stack.pop();
            }
            else if(brackets_stack.top() == '{' && bracket == '}'){
                brackets_stack.pop();
            }
            else if(brackets_stack.top() == '[' && bracket == ']'){
                brackets_stack.pop();
            }
            else brackets_stack.push(bracket);
        }
        if(brackets_stack.empty()) return true;
        else return false;
    }
};
