class Solution {
public:
    int left(int start , int end , vector<int>& nums , int target)
    {
        int result = -1;    
        while(start <= end)
        {
            int mid = start + (end - start)/2;  
            if(nums[mid] == target)
            { 
                result = mid;  
                end = mid - 1;  
            }
            else if(nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return result;
    }
    
    int right(int start , int end , vector<int>& nums , int target)
    {
        int result = -1;   
        while(start <= end) 
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                result = mid; 
                start = mid + 1; 
            }
            else if(nums[mid] >= target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return result;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0 , end = n - 1;
        vector<int>ans(2);
        ans[0] = left(start , end , nums , target);
        ans[1] = right(start , end , nums , target);
        return ans;
    }
};
        
