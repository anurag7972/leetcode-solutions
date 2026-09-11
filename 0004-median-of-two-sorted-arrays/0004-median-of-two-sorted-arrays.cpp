class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
          int a=nums1.size();
          int b=nums2.size();
         vector <int> c(a+b);

         merge(nums1.begin(), nums1.end(),nums2.begin(),nums2.end(),c.begin());
           int n=c.size();

         if(n%2==1){
            return c[n/2];
         }else{
            return (c [n / 2-1] + c[n / 2] )/2.0;
         }
    }
};