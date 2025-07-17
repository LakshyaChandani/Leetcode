class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int rNum = 0;
        long long int num = x;
        while(x>0){
            rNum = (rNum*10) + x%10;
            x/=10; 
        }
        if(num == rNum) return true;
        return false;
    }
};
