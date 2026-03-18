class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        int before = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = before;
            before *= nums[i];
        }

        int after = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= after;
            after *= nums[i];
        }

        return answer;
    }
};