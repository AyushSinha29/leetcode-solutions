class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
      {vector<string> ans;
        unordered_map<string, int> Andy;
        int i = 0;
        for(string &list : list1)
        {
            Andy[list] = i;
            i++;
        }
        i=-1;
        int MinIdx = INT_MAX;
        for(string &str : list2)
        {
            i++;
            if(!Andy.count(str)) continue;
            int val = Andy[str]+i;
            if(val == MinIdx)
            {
                ans.push_back(str);
                continue;
            }
            else if(val < MinIdx)
            {
                ans.clear();
                MinIdx = val;
                ans.push_back(str);
            }
        }
        return ans;
    }
};
        
    
