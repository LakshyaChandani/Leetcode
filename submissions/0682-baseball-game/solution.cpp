class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int,vector<int>> scoresheet;
        
        for(auto operation: operations){
            if(operation == "C" && !scoresheet.empty()) scoresheet.pop();
            else if (operation == "D" && !scoresheet.empty()) scoresheet.push(2*scoresheet.top());
            else if (operation == "+" && scoresheet.size()>=2){
                int first = scoresheet.top();
                scoresheet.pop();
                int second = scoresheet.top();
                scoresheet.push(first);
                scoresheet.push(first+second);
            }
            else{
                scoresheet.push(stoi(operation));
            }
        }
        int sum = 0;
        while(!scoresheet.empty()){
            sum+=scoresheet.top();
            scoresheet.pop();
        }
        return sum;
    }
};
