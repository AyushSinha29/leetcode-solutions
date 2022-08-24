class Solution {
public:
    string getHint(string s, string g) 
    {
      unordered_map<char,char>mp;
        int a=0,b=0;
        string temp="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==g[i])
            {
                a++;
                
            }
            else
            {
                mp[s[i]]++;
                temp+=g[i];
            }
        }
        for(auto i:temp)
        {
            if(mp.find(i)!=mp.end())
            {
                b++; 
                mp[i]--;
                if(mp[i]<=0) mp.erase(i);
            }
        }
        string str="";
        str+=(to_string(a));
        str+="A";
        str+=(to_string(b));
        str+="B";
        return str;
    }
};