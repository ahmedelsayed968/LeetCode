class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 =nums1.size(), size2 = nums2.size();
        vector<int> merged ;
        int i = 0 , j = 0, k = 0;
        while(i < size1 && j < size2){

            if(nums1[i] < nums2[j])
                merged.push_back(nums1[i++]);
            else if(nums1[i] > nums2[j])
                merged.push_back(nums2[j++]);
            else {
                merged.push_back(nums2[j++]);
                merged.push_back(nums1[i++]);
            }

        }
        while (i < size1)
            merged.push_back(nums1[i++]);
        while (j < size2)
            merged.push_back(nums2[j++]);

        int mapSize = merged.size();
        double  ret;
        if(mapSize % 2){
            ret = merged[mapSize/2];
            return ret;
        }
        else {
            int first = (mapSize / 2)-1;
            ret =  (merged[first] + merged[first+1])/2.0;
            return ret;
        }
    }
};