class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int pushes = 0;
        for(int i = 0; i<word.size(); i++){
            pushes += (i/8) + 1;
        }
        return pushes; 
    }
};
