class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        
        for(int i=2;i<=n/i;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    bool isUgly(int n) {
        if(n==2 || n==3 || n==5) return true;
        if(isprime(n)) return false;
        if(n<=0) return false;
        
        vector<int> v;
        for(int i=1;(long long)i*i<=n;i++){
                if(n%i == 0 && isprime(i)){
                    v.push_back(i);
                }
                if(n%i==0 && n/i !=i && isprime(n/i)){
                    v.push_back(n/i);
                }
        }        
        
        for(int i=0;i<v.size();i++){
                if(v[i]!=2 && v[i] !=3 && v[i]!=5){
                    return false;
                }
        }
        return true;
        
    }
};