class Solution {                      
public:
    int reverse(int x) {
        long revNum = 0;      // decleare revNum 
        while(x){
         revNum = revNum*10 + x%10; // find remainder and add its to revNum
         x = x/10;     // Update the value of x
        }
        if(revNum > INT_MAX || revNum < INT_MIN) return 0; // check range if revNum is outside the range then return 0  
        return int(revNum);  // if revNum in the 32 bit range then return r
    }
}; 