class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,n=nums.size(),r=n-1,mid;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
           else if(nums[mid]>=nums[l])
            {
                if(target>=nums[l] && target<nums[mid])
                    r=mid-1;
                else
                    l=mid+1;
            }
            else
            {
                if(target>nums[mid] && target<=nums[n-1])
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        
        return -1;
        
        
    }
};