class Solution {
public:
   
           string frequencySort(string &s) {
        unordered_map<char,int> mp;
        for(auto &i: s){
            mp[i]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto &i: mp){
            pq.push({i.second,i.first});
        }
        string ans = "";
        pair<int,char> p;
        while(!pq.empty()){
            p = pq.top();
            pq.pop();
            while(p.first > 0){
                ans += p.second;
                p.first--;
            }
        }
        return ans;
    }
    
};  
