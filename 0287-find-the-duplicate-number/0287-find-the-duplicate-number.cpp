class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
    
        
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
  
 
int ans;
    unordered_map<int, int>:: iterator itr;
    for (itr=m.begin(); itr!=m.end(); itr++)
    {

        if (itr->second > 1)
        
            ans= itr->first;
          
        
    }
        return ans;
    }
}; 