class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        
        for(int i = 0; i < words.size(); i++) {
            string s = "";
            for(char c : words[i]) {
                s += v[c-'a'];
            }
            st.insert(s);
        }
        
        return st.size();
    }
};