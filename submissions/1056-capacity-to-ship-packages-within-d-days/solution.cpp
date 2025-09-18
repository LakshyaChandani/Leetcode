class Solution {
public:

    int sumWeight(vector<int>& weights){
        int total = 0;
        for(int weight:weights){
            total+=weight;
        }
        return total;
        }

    bool canCarry(vector<int>& weights, int days, int capacity){
        int currentDays = 1;
        int currentCapacity = 0;
        for(int weight:weights){
            if(weight>capacity) return false;
            if(currentCapacity+weight > capacity){
                currentDays++;
                if(currentDays>days) return false;
                currentCapacity = weight;
            }
            else{
               currentCapacity+=weight; 
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = 1, high = sumWeight(weights);
        while(low<=high){
            int mid = low + ((high-low)/2);
            if(canCarry(weights,days,mid)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
