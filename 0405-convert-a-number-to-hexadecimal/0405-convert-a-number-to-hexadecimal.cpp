class Solution {
public:
    string toHex(int n) {
        string hexa;
        if(n==0) return "0";
        unsigned int num = n;
        while(num%16!=num){
            if(num%16>=10){
                hexa+=static_cast<char>('a'+(num%16)%10);
            }
            else
                hexa+=static_cast<char>('0'+num%16);
            num/=16;
        }
        if(num>=10)
            hexa+=static_cast<char>('a'+(num%10));
        else
            hexa+=static_cast<char>('0'+num);
        reverse(hexa.begin(),hexa.end());
        return hexa;
    }
};