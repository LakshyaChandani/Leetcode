class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        unordered_set<char> substring;
        int left = 0;
        int right = 0;
        while(right < s.size()){
            while(substring.contains(s[right])){
                substring.erase(s[left]);
                left++;
            }

            substring.insert(s[right]);
            longest = max(right-left+1,longest);
            right++;
        }

        return longest;
    }
};
