class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int> container(1001,0);
        int ans, max=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key) container[nums[i+1]]++;
            if(container[nums[i+1]]>max){
                ans = nums[i+1];
                max=container[nums[i+1]];
            }
        }
        return ans;
    }
};