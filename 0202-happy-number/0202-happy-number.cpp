class Solution {
public:
    bool isHappy(int n) {
        while(n!=1){
            if(n==7 ) return true;
            if(n%10 == n) return false;
            int sq=0;
            while(n!=0){
                int temp = n%10;
                sq += pow(temp,2);
                n/=10;
            }
            n=sq;
            
        }
        return true;
        
        
    }
};