class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> result;

        for(string& str: strs){
            string key = str;
            sort(key.begin(),key.end());
            mpp[key].push_back(str); 
        }

        for(auto& pair: mpp){
            result.push_back(pair.second);
        }

        return result;
    }
};
