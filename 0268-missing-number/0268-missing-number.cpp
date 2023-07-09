class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums.size();
        for (int i=0; i<x; i++) {
            int flag = 0;
            for (int j=0; j<x; j++) {
                if (nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                return i;
            }
        }
        return x;
    }
};