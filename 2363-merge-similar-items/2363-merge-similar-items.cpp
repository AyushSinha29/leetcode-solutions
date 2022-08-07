class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> arr;
        unordered_map<int,int> mp;
        int i=0;
        for(auto a:items1){
            if(mp.find(a[0])==mp.end()){
                mp[a[0]]=i;
                i++;
                arr.push_back({a[0],a[1]});
            }else{
                arr[mp[a[0]]][1]+=a[1];
            }
        }
        for(auto a:items2){
            if(mp.find(a[0])==mp.end()){
                mp[a[0]]=i;
                i++;
                arr.push_back({a[0],a[1]});
            }else{
                arr[mp[a[0]]][1]+=a[1];
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};