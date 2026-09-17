class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = false;
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(!flag && s[i]==' '){
                continue;
            }
            if(flag && s[i] == ' '){
                break;
            }
            
            cnt++;
            flag = true;

        }
        return cnt;
        
    }
};