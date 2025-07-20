class Solution {
public:
    bool isPalindrome(string s) {
        string cString;
        for(char letter: s){
            if (isalnum(letter)) cString+=tolower(letter);
        }
        int n = cString.size();
        for(int i = 0; i<n/2; i++){
            if(cString[i] != cString[n-i-1]) return false;
        }
        return true;
    }
};
