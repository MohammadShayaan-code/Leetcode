class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int i=2;
        while(i<=(num/2)){
            if((long long)i*i==num) {
                cout<<i;
                return true;
            }
            i++;
        }
        return false;
        
        
    }
};