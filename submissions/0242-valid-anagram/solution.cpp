class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int> mpp;
        for(int i =0; i<t.size(); i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }
        for(auto i: mpp){
            if(i.second!=0) return false;
        }
        return true;
    }
};
