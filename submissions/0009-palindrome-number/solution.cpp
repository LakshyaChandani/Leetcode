#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int left = 0;
        int right = num.size() - 1;
        while(right>left){
            if (num[left] != num[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
