class Solution {
public:
    int reverseDegree(string s) {
        
        int result=0;
        int  rev;
       
         for(int i=0; i<s.length(); i++){
            rev= 'z' - s[i] +1;
            result+= rev*(i+1);
         }
         return result;
    }
};