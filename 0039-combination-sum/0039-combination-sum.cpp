class Solution {
    void solve(vector<int>& candidates, int target, int start, vector<vector<int>> &ans, vector<int> &temp)
    {
        if(target==0) 
        {
            ans.push_back(temp);
            return;
        }
        
        if(start == candidates.size() || target<0) 
            return;
        
        temp.push_back(candidates[start]);
        solve(candidates, target-candidates[start], start, ans, temp);
        temp.pop_back();
        solve(candidates, target, start+1, ans, temp);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, target, 0, ans, temp);   
        return ans;
    }
};