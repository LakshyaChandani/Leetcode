class Solution {
public:
    string frequencySort(string s) {

        int freq[128] = {0};

        for(char c: s){
            freq[c]++;
        }

        vector<pair<int,char>> arr;

        for(int i = 0; i<128; i++){
            if(freq[i] > 0){
                arr.push_back({freq[i], (char)i});
            }
        }

        sort(arr.rbegin(), arr.rend());

        string result = "";

        for(auto p: arr){
            result.append(p.first,p.second);
        }

        return result;

    }
};
