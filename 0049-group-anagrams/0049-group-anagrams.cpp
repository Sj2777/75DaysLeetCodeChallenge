class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<string> keys;  

        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            string key = word;
            sort(key.begin(), key.end());  

            bool found = false;
            for (int j = 0; j < keys.size(); j++) {
                if (keys[j] == key) {
                    result[j].push_back(word);
                    found = true;
                    break;
                }
            }
            if (!found) {
                keys.push_back(key);
                result.push_back(vector<string>{word});
            }
        }

        return result;
    }
};