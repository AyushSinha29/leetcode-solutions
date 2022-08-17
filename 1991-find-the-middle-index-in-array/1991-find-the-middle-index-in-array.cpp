class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0,left=0;
        
        if(n==1&&n==2){
            return -1;
        }
        
 
        int rightsum = accumulate(nums.begin(),nums.end(),0);
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            rightsum -= nums[i];
            if(leftsum == rightsum) return i;
            leftsum +=nums[i]; 
        }
        return -1;
    }
};


