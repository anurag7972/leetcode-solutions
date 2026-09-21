class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        vector<long long> dp(k, 0);
        vector<long long> result(k, 0);

        for(int x : nums) {

            vector<long long> newdp(k, 0);

            // Start a new subarray with x
            newdp[x % k]++;

            // Extend all previous subarrays
            for(int r = 0; r < k; r++) {

                int  newRem = (1LL * r * x) % k;
                newdp[newRem] += dp[r];
            }

            // Move to next position
            dp = newdp;

            // Add counts to final answer
            for(int r = 0; r < k; r++) {
                result[r] += dp[r];
            }
        }

        return result;
    }
};