class Solution {
public:
    string reverseParentheses(string s) {
        
        string rev;
        int n=s.length();
        stack <string> st;
        
         for(int i=0; i<n; i++){
            if(s[i]=='('){
                st.push(rev);
                rev="";
            }else if(s[i]==')'){
                reverse(rev.begin(), rev.end());

                rev= st.top()+rev;
                st.pop();
            }else{
                rev+=s[i];
            }
         }
        return rev;
    }
};