class Solution {
public:
    int maxProduct(int n) {
        int largest = 0;
        int second = 0;

        while(n){
            int d = n%10;

            if(d>=largest){
                second = largest;
                largest = d;
            }

            else if(d>second){
                second = d;
            }

            n/=10;
        }

        return largest*second;
    }
};
