class Solution {
public:
   
        string frequencySort(string &s) {
        
 unordered_map<char,int> mp;
        for(int i=0; i<s.size(); i++)
            mp[s[i]]++;
        
        string ans="";
        priority_queue<pair<int,char>> pq;
        
        for(auto x:mp)
            pq.push({x.second,x.first});
        while(!pq.empty())
        {
            int temp = pq.top().first;
           
            while(temp--)
                ans += pq.top().second;
            pq.pop();
        }
     
        return ans;
    }
    
};  
