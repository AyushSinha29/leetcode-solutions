class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     /*   int n=nums.size();
    
        
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
  
 
int ans;

    for (auto it : m)
    {

        if (it.second > 1)
        
            ans= it.first;
          
        
    }
        return ans;
    }
    */
    
        sort(nums.begin(), nums.end());
        
        int duplicate = 0;
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i+1]) {
                duplicate = nums[i];
                break;
            }
        return duplicate;
    }
    
    
}; 