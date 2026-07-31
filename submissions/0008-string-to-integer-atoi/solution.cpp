class Solution {
public:
    long long helper(string &s, int i, long long num, int sign){

        if(i>=s.size() || !isdigit(s[i])) return num*sign;
        
        int digit = (s[i]-'0');

        if(num>INT_MAX/10){
            if(sign == 1) return INT_MAX;
            else return INT_MIN;
        }

        if(num==INT_MAX/10){
            if(sign == 1 && digit>INT_MAX%10) return INT_MAX;
            else if(sign == -1 && digit>abs(INT_MIN%10)) return INT_MIN;
        }
        


        num = (num*10) + digit;

        return helper(s,i+1,num,sign);

    }

    int myAtoi(string s) {

        int sign = 1;
        long long num = 0;
        int i = 0;

        while(i<s.size() && s[i] == ' ') i++;

        if(i<s.size() && (s[i] == '+') || s[i] == '-'){
            if(s[i] == '-') sign = -1;
            i++;
        }

        if(i >= s.size() || !isdigit(s[i])) return 0;

        return helper(s,i,num,sign);
    }
};
