class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        vector<int> result;
        int expected = 1;
        int i = 0;
        
        while (expected <= n && i < n) {
            if (nums[i] == expected) {
                i++;
                expected++;
            } else if (nums[i] < expected) {
                i++;
            } else {
                result.push_back(expected);
                expected++;
            }
        }
        
        while (expected <= n) {
            result.push_back(expected);
            expected++;
        }
        
        return result;
    }
};