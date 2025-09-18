#include <climits>
class Solution {
public:
    int reverse(int x) {
        long long new_number = 0;
        while (x != 0) {
            new_number = (new_number * 10) + (x % 10);
            if(new_number>INT_MAX||new_number<INT_MIN) return 0;
            x /= 10;
        }
        return new_number;
    }
};
