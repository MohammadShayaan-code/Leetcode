class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ch[128] = {0};
        int l=0;
        int len=0;
        for(int r=0;r<s.size();r++){
            
            if(ch[s[r]] > l){
                l=ch[s[r]];   
            }
            len = max(len,r-l+1);
            ch[s[r]] = r+1;
        }
        return len;
        
        
    }
};