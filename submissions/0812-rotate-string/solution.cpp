class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string doubled = s+s;
        for(int i = 0; i<s.size();i++){
            if(doubled.substr(i,s.size()) == goal) return true;
        }
        return false;
    }
};
