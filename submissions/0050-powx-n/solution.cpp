class Solution {
public:
    double power(double x, long long n){
        if(n == 0) return 1;

        double halfPower = power(x,n/2);

        if(n%2 == 0) return halfPower*halfPower;

        return halfPower*halfPower*x;
    }

    double myPow(double x, int n) {
        long long nn = n;
        if(nn<0){
            nn*=-1;
            return (double)1/power(x,nn);
        }
        return power(x,nn);
    }
};
