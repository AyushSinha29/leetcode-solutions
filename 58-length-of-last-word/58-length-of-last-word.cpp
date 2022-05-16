class Solution {
    public:
        int lengthOfLastWord(string s) {
            int counter = 0;
             int j = s.length()-1;
            if(s.length()==1){
                return 1;
            }
           
            while(s[j] == ' '){
                j--;
            }

            while(j>=0 && s[j] != ' '){
                counter++;
                j--;
            }
            
            return counter;
        }
};