class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> forward;
        unordered_map<char,char> backward;
        for(int i =0; i<s.size(); i++){
            if (forward.find(s[i]) == forward.end() && 
                backward.find(t[i]) == backward.end())
            {
                forward[s[i]] = t[i];
                backward[t[i]] = s[i];
            } 
            
            else if (forward.find(s[i]) != forward.end() &&
                     forward[s[i]] == t[i] && backward[t[i]] == s[i])
                     continue;

            else 
            return false;
        }
        return true;
    }
};
