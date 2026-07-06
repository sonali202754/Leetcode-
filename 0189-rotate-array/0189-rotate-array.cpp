class Solution {
public:
void partofreverse(vector<int>& nums,int i,int j){
    while(i<=j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
}
void reverse(vector<int>& nums,int n){

    int i=0;
    int j=n-1;
     while(i<=j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }

}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) k=k%n;
        partofreverse(nums,0,n-k-1);
        partofreverse(nums,n-k,n-1);
        reverse(nums,n);
    }
};