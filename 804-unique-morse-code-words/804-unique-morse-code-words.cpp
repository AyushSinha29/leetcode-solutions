class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> stringSet;
        
        for(int i = 0; i < words.size(); i++) 
        {
            string str = "";
            for(char c : words[i]) {
                str =str+ v[c-'a'];
                cout<<str<<"*";
            }
            cout<<"next";
            stringSet.insert(str);
        }
        
        return stringSet.size();
    }
};