class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int element=0;
         for( int x :nums){
            element= element ^ x;
         }
        return element;

        
       
        
    }
};