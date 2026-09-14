class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        long long pow=1;
        while(pow<=n){
            pow=pow*3;
            if(pow==n){
                return true;
            }
        }
        return false;
    }
};