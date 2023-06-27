class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long int newN = 0;
        while(x > 0) {
            newN = newN*10 + x%10;
            x = x/10;
        }
        if (newN == n) {
            return true;
        }
        return false;
    }
};