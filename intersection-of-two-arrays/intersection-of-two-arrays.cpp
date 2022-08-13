class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
                sort(nums2.begin(),nums2.end());
        set<int>res;
        int i,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
                i++;
            else if(nums1[i]>nums2[j])
                j++;
            else
            {res.insert(nums1[i]);
            
            
            i++;
            j++;
            
            }
        }
        
        vector<int>ans;
        for(auto i : res)
            ans.push_back(i);
        
        return ans;


    }
};