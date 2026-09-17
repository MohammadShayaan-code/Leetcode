class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int j = i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
        
    }
};