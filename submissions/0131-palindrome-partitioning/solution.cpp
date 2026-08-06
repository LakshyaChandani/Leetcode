class Solution {
public:

    bool isPalindrome(string& part){
        int low = 0;
        int high = part.size()-1;

        while (low<high){
            if(part[low]!=part[high]) return false;
            low++;
            high--;
        }

        return true;
    }


    void generatePartitions(string s,vector<string>& partition,vector<vector<string>>& result){

        if(s.empty()){
            result.push_back(partition);
            return;
        }

        for(int i = 0; i<s.size();i++){
            string part = s.substr(0,i+1);
            if(isPalindrome(part)){
                partition.push_back(part);
                generatePartitions(s.substr(i+1),partition,result);
                partition.pop_back();
            }
        }

    }

    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>> result;
        generatePartitions(s,partition,result);
        return result;
    }
};
