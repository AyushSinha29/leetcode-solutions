class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>anagrams;
        int j=0;
        unordered_map<string,int>m;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            if(m.find(s)==m.end()){
                vector<string>v;
                v.push_back(strs[i]);
                m[s]=j;
                anagrams.push_back(v);
                j++;
            }
            else
                anagrams[m[s]].push_back(strs[i]);
        }
        return anagrams;
    }
};