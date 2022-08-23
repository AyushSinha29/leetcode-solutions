class Solution {
    int calling(vector<int>vec)
    {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<26;i++)
        {
            if(vec[i]==0)
            {
                continue;
            }
            mini=min(mini,vec[i]);
            maxi=max(maxi,vec[i]);
        }
        return maxi-mini;
    }
public:
    int beautySum(string s) {
        vector<int>vec(26);
        vector<int>er(26,0);
        int ans=0;
        for(int i=0;i<s.size()-1;i++)
        {
            vec[s[i]-'a']++;
            for(int j=i+1;j<s.size();j++)
            {
                vec[s[j]-'a']++;
                ans+=calling(vec);
            }
            vec=er;
        }
        return ans;
    }
};