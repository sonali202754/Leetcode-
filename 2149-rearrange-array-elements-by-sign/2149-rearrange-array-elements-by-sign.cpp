class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // here the no of negative and positive element are same
        int n= nums.size();
        vector<int>ans(n,0);
        int postindex=0;
        int negindex=1;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                ans[negindex]=nums[i];
                negindex+=2;
            }
            else{
                   ans[postindex]=nums[i];
                postindex+=2;
            }
        }
        return ans;
    }
};