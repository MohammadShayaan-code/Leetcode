class Solution {
public:
    int titleToNumber(string str) {
        int size = str.size();
        int ans=0;
        for(int i=0;i<str.size();i++){
            ans+=(str[i]-64)*pow(26,size-1);
            size--;
        }
        return ans;
    }
};