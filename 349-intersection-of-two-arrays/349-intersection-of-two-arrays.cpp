class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size();
        int l2 = nums2.size();
        map<int,int> mp1;
        map<int,int> mp2;
        
        vector<int> ans;
        
        for(int i=0;i<l1;++i){
          mp1[nums1[i]]=0;
        }
        
        for(int i=0;i<l2;++i){
          if(mp1.find(nums2[i])!=mp1.end() && mp1[nums2[i]]==0){
              ans.push_back(nums2[i]);
              mp1[nums2[i]]++;
          }
        }
        
    
        return ans;
    }
};