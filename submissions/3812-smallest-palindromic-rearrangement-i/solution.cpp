class Solution {
public:
    string smallestPalindrome(string s) {
        int arr[26] = {0};
        string result;
        string middle = "";

        for(auto letter: s){
            arr[letter-'a']++;
        }

        for(int i = 0; i<26; i++){

            int count = arr[i]/2;

            while(count){
                result+= (i+'a');
                count--;
            }

            if(arr[i]%2 != 0){
                middle = (i+'a');
            }

        }
        
        string reverse =string(result.rbegin(), result.rend());
        result = result + middle + reverse;

        return result;
    }
};
