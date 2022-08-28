class Solution {
public:
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    
        priority_queue<pair<int,pair<int,int>>> maxh;
        vector<vector<int>> ans;
        
           
        for(int i =0;i<nums1.size();++i){
   
            for(int j =0; j<nums2.size();++j){
    
                int sum = nums1[i] + nums2[j];
                
              
                if(maxh.size() < k) maxh.push({sum, {nums1[i], nums2[j]}});
               
                else if(maxh.top().first > sum){
                
                    maxh.pop();
              
                    maxh.push({sum, {nums1[i], nums2[j]}});
               }
                else 
                    break;
            }
        }
      
        while(!maxh.empty())
        {
            ans.push_back({maxh.top().second.first,maxh.top().second.second});
            maxh.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};