class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();
    digits[n - 1] += 1;
    int x = digits[n - 1] / 10;
    digits[n - 1] = digits[n - 1] % 10;
    for (int i = n - 2; i >= 0; i--) {
        if (x == 1) {
            digits[i] += 1;
            x = digits[i] / 10;
            digits[i] = digits[i] % 10;
        }
    }
 
    
    if (x == 1)
        digits.insert(digits.begin(), 1);

    return digits;
    }    
};