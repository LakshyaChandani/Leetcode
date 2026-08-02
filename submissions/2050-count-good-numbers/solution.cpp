class Solution {
public:
    const int MOD = 1e9+7;

    int power(int num, long long exp){
        if(exp==0) return 1;

        long long halfPower = power(num,exp/2);

        long long answer = (halfPower * halfPower) % MOD;

        if(exp%2==1) answer = (answer * num) % MOD;

        return answer;
    }

    int countGoodNumbers(long long n) {
        long long evenDigits = (n+1)/2;
        long long oddDigits = n/2;

        return (1LL * power(5,evenDigits) * power(4,oddDigits))%MOD;
    }
};
