class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size()-1; j++) {
                if ((nums[i] - nums[j+1]) == k || (nums[j+1] - nums[i]) == k) {
                    count++;
                }
            }
        }
        return count;
    }
};