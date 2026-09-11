class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long pow=1;
        if(n==1) return true;
        while(pow <= n/2){
            pow*=2;
            if(pow == n){
                return true;
            }
        }
        return false;
    }
};