class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        int thirdLargest = INT_MIN;
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for(int num: nums){
            if(num>=largest){
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = num;
            }
            else if(num>=secondLargest){
                thirdLargest = secondLargest;
                secondLargest = num;
            }
            else if(num>=thirdLargest){
                thirdLargest = num;
            }
            

            if(smallest >= num){
                secondSmallest = smallest;
                smallest = num;
            }
            else if(secondSmallest >= num){
                secondSmallest = num;
            }

        }

        return max(largest*secondLargest*thirdLargest, largest*smallest*secondSmallest);
    }
};
