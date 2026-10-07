class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        int count[256] = {0};
        int maxLength = 0;
        int start = 0;

        for (int end = 0; end < (int)s.length(); end++) {
            count[(unsigned char)s[end]]++;
            while (count[(unsigned char)s[end]] > 1) {
                count[(unsigned char)s[start]]--;
                start++;
            }
            maxLength = max(maxLength, end - start + 1);
        }
        return maxLength;
    }
};

