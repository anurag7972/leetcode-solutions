class Solution {
public:
    int mySqrt(int x) {
        
        int first=0;
        int last=x;

        while(first<=last){
            long long mid= first+(last-first)/2;
            long long square= mid * mid;

            if(square==x){
                return mid;
            }else if(square<x){
                first= mid +1;
            }else{
                last=mid -1;
            }
        }
        return last;
    }
};