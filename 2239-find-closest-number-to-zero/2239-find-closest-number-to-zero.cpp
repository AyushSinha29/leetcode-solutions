class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
     int ans= *min_element(begin(nums), end(nums), [](int a, int b)
                         
                        { return abs(a) == abs(b) ? a > b : abs(a) < abs(b); });
        
        return ans;
        
    }
    
};