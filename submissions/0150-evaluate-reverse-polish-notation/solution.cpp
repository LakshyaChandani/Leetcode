class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> myStack;
        for(auto token: tokens){

        if(token == "+" ||
            token == "-" ||
            token == "*" ||
            token == "/")
            {
                
            int b = myStack.back();
            myStack.pop_back();
            int a = myStack.back();
            myStack.pop_back();

            if(token == "+") myStack.push_back(a+b);
            else if(token == "-") myStack.push_back(a-b);
            else if(token == "*") myStack.push_back(a*b);
            else if(token == "/") myStack.push_back(a/b);
        }
        
        else{
            myStack.push_back(stoi(token));
        }            
        }
        return myStack.back();

    }
};
