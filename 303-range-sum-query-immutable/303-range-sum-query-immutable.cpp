
class NumArray {
    vector<int> ans;
public:
    NumArray(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            
            ans.push_back(nums[i]);
        }
        
        
    }
    
    int sumRange(int left, int right) {
        
        int sum=0;
        for(int i=left;i<=right;i++) sum+=ans[i];
        
        return sum;
    }
};