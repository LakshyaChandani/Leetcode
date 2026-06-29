class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() == 0) return true;
        int current_char = 0;
        for(int i = 0; i<t.length(); i++){
            if(s[current_char] == t[i]){
                current_char++;
            }
        }
        if (current_char == s.length())return true;
        return false;
    }
};
