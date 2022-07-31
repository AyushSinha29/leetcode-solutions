class NumArray {
public:
    vector<int> ans;
    int sum=0;
    NumArray(vector<int>& nums) 
    {
        ans=nums;
        sum=accumulate(ans.begin(),ans.end(),0);
    }
    
    int sumRange(int left, int right) 
    {
        int res=sum;
        for(int i=0;i<left;i++)
            res-=ans[i];
        
        for(int i=right+1;i<ans.size();i++)
            res-=ans[i];
        
        return res;
    }
};