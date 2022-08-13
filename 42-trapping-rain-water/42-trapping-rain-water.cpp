class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.size()==1 || height.size()==2)
        {
            return 0;
        }
        
        vector<int> left_max(height.size());
        vector<int> right_max(height.size());
        
        left_max[0]=height[0];
        right_max[height.size()-1]=height[height.size()-1];
        
        int i, water=0;
        for(i=1;i<height.size();i++)
        {
            left_max[i]=max(left_max[i-1], height[i]);
        }
        
        for(i=height.size()-2;i>=0;i--)
        {
            right_max[i]=max(right_max[i+1], height[i]);
        }
            
        for(i=1;i<height.size()-1;i++)
        {
            int stored_water=min(left_max[i], right_max[i])-height[i];
            water=water+stored_water;
        }
        
        return water;
        
    }
};