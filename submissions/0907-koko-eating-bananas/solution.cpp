class Solution {
public:

    bool canEat(vector<int>& piles,int mid,int hours){
        long long total = 0;
        for(double it: piles){
            total+=(it + mid - 1) / mid;
        }
        return total<=hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            if(canEat(piles,mid,h)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
