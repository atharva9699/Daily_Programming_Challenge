class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0; // Edge case: no height means no trapped water
        int leftmax=0,rightmax=0,maxheight=height[0],index=0;
        int water=0;
        //Maximum height build
        for(int i=1;i<n;i++){
            if(maxheight<height[i])
            {
                maxheight=height[i];
                index=i;
            }
        }
        //Left half
        for(int i=0;i<index;i++)
        {
            if(leftmax>height[i])
            {
                water+=leftmax-height[i];
            }
            else
                leftmax=height[i];
        }
        //Right Half
        for(int i=n-1;i>index;i--)
        {
            if(rightmax>height[i])
            {
                water+=rightmax-height[i];
            }
            else
                rightmax=height[i];
        }
        return water;
    }
    
};
