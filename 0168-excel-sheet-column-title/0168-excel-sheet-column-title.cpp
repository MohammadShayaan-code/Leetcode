class Solution {
public:
    string convertToTitle(int n) {
        string str;
        while(n>0){
            n--;
            int add = n%26;
            n=n/26;
            str+=static_cast<char>('A'+add);
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};