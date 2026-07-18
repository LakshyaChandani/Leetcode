class Solution {
public:

        int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for(int i=0; i<nums.size();i++){
            smallest = min(smallest, nums[i]);
            largest = max(largest,nums[i]);
        }
        return gcd(smallest,largest);
    }

};
