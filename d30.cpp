class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),l=0,r=0,maxi=0,zero=0;
        while(r<n){
            if (nums[r]==0) zero++;//zero+=!nums[r]
            if (zero>k){
                if (nums[l]==0) zero--;
                l++;
            }
            if (zero<=k){
                int len=r-l+1;
                maxi=max(len,maxi);
            }
            r++;



        }
        return maxi;
        
    }
};