class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int p1 = s.size()-1;
        int p2 = t.size()-1;

        while(p1>=0 || p2>=0){
            int skip1 = 0;
            int skip2 = 0;

            while(p1>=0){
                if(s[p1] == '#'){
                    skip1++;
                    p1--;
                }
                else if(skip1>0){
                    skip1--;
                    p1--;
                }
                else break;
            }

            while(p2>=0){
                if(t[p2] == '#'){
                    skip2++;
                    p2--;
                }
                else if(skip2>0){
                    skip2--;
                    p2--;
                }
                else break;
            }

            if(p1<0 ^ p2<0) return false;
            if((p1>=0 && p2>=0) && s[p1] != t[p2]) return false; 

            p1--;
            p2--;
        }
        return true;
    }
};
