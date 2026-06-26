class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1; //Pointer for nums1 array
        int j = n-1; //Pointer for nums2 array
        int k = nums1.size() -1; //Pointer for last element
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};
