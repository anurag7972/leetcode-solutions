class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int ressult[2];
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    ressult[0]=i;
                    ressult[1]=j;
                    return {ressult[0], ressult[1]};
                }
            }
        }
        return {};
    }
        
};
        
    