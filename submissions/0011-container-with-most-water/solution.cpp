class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int low = 0;
        int high = height.size()-1;

        while(low<high){
            int currArea = (high-low) * min(height[low],height[high]);
            maxArea = max(maxArea,currArea);

            if(height[low]>height[high]) high--;
            else low++;
        }
        
        return maxArea;
    }
};
