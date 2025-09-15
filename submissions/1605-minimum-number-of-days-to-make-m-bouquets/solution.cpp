class Solution {
public:
    bool bouquetsCanBeMade(vector<int>& bloomDay, int currentDay, int k, int m){
        int count = 0, numberOfBouquets = 0;
        for(auto it: bloomDay){
            if(it<=currentDay){
                count++;
                if(count == k){
                numberOfBouquets++;
                count = 0;
                }
            } 
            else count = 0;
        }
        return numberOfBouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        
        if(n < 1LL*m*k) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end()), high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = low + ((high - low)/2);
            if(bouquetsCanBeMade(bloomDay,mid,k,m)) high = mid - 1;
            else low = mid+1;
        }
        return low;
    }
};
