class Solution {
public:
    bool isIsomorphic(string s, string t) {
 
      unordered_map<char,char> m;
      unordered_set<char> set;
      
      if(s.size() != t.size()) 
          return false;
      
      for(int i=0; i<s.size(); ++i){
        int cs = s[i], ct = t[i];

        if(m.count(cs)) {
          if(m[cs] == ct) continue;
          else return false;
        }

        else {
          if(set.count(ct)) return false;
          m[cs] = ct;
          set.insert(ct);
        }
      }

      return true;
    }
};