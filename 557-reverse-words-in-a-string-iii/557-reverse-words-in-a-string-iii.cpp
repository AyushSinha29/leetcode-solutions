class Solution {
public:
   void reverse(string &s, int i, int j){   
    while(i<j){
        swap(s[i],s[j]);
        i++;j--;
    }
}

string reverseWords(string s) {
    int st=0,end=0,n=s.size();
    
    for(int i=0;i<n;i++){
        if(s[i]==' '){              
            end=i-1;                 
            reverse(s,st,end);         
            st=i+1;
        }
    }
    reverse(s,st,n-1);           
    return s;
}
};