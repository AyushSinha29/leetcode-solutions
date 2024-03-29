class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
            int m = 0;
        int h = nums.size()-1;
        while(l<=h){
            m = (l + h )/2;
            if(target==nums[m]){
                return m;
            }
            else if(target < nums[m]){
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        return -1;
    }
};