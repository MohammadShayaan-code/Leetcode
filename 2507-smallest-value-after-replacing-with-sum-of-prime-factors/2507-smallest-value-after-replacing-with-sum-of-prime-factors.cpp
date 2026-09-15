class Solution {
public:
    int smallestValue(int n) {
        while(true){
            int sum=0;
            int t=n;
            for(int i=2;i*i<=t;i++){
                while(t%i==0){
                    sum+=i;
                    t=t/i;
                }
            }
            if(t>1){
                sum+=t;
            }
            if(sum==n){
                return n;
            }
            n=sum;
        }
        
        
    }
};