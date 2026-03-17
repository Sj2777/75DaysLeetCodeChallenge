class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        vector<pair<int,int>> freq; 
        int count = 1;
        for (int i = 1; i <= nums.size(); i++) {
            if (i < nums.size() && nums[i] == nums[i-1]) {
                count++;
            } else {
                freq.push_back({nums[i-1], count});
                count = 1;
            }
        }
  
        sort(freq.begin(), freq.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freq[i].first);
        }
        return result;
    }
};