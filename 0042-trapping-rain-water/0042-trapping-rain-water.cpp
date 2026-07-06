class Solution {
public:
    int trap(vector<int>& height) {
      int n= height.size();
     // find the previous greatest elements
     int prev[n];
     prev[0]=-1;
     int max=height[0];
     for(int i=1; i<n; i++){
        prev[i]=max;
        if(max<height[i]){
            max=height[i];
        }


     }
     // find next gretest element
     int next[n];
     next[n-1]=-1;
     max=height[n-1];
     for(int i=n-2;i>=0; i--){
        next[i]=max;
        if(max<height[i]){
            max=height[i];
        }
     }
     // minimun
     for(int i=0; i<n; i++){
        prev[i]=min(prev[i],next[i]);
     }
     //store water calculate
     int water=0;
     for(int i=1; i<n-1; i++){
        if(height[i]<prev[i]){
        water+=prev[i]-height[i];
     }
    }
    return water;
    }
};