class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=0;
        int nums3[m+n];

        while(i<m && j<n){
            if(nums1[i] > nums2[j]){
                nums3[k] = nums2[j];
                j++;
                k++;
            }
            else{
                nums3[k] = nums1[i];
                i++;
                k++;
            }
        }
        while(i<m){
            nums3[k] = nums1[i];
            k++;
            i++;
        }
        while(j<n){
            nums3[k] = nums2[j];
            j++;
            k++;
        }

        for(int i=0; i<m+n; i++){
            nums1[i] = nums3[i];
        }
    }
};