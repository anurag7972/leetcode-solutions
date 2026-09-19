    class Solution {
    public:
        string longestPalindrome(string s) {

            int maxlen=1;
            int start=0;

            for(int i=0; i<s.length(); i++){
                int left=i;
                int right=i;

                while(left>=0 && right<s.length() && s[left]==s[right]){
                    int len=right -left +1;

                    if(len>maxlen){
                        maxlen=len;
                        start=left;
                    } 
                    left--;
                    right++;
                }
                left=i;
                right=i+1;

                while(left>=0 && right<s.length() && s[left]==s[right]){
                    int len= right -left +1;

                    if(len>maxlen){
                        maxlen=len;
                        start=left;
                    }
                    left--;
                    right++;
                }
            }

            return s.substr(start, maxlen);
            
        }
    };