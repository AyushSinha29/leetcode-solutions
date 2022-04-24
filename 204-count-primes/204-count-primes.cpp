class Solution {
public:
    int countPrimes(int n) {
     
            
    bool prime[n+1];
    int t=0;
    memset(prime, true, sizeof(prime));
  
    for (int p=2; p*p<n; p++)
    {
        
        if (prime[p] == true)
        {
           
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
  
 
    for (int p=2; p<n; p++)
       if (prime[p])
       { t=t+1;}

return t;
    }
};