#include <string>
using namespace std;

class Solution {
public:
    bool equalFrequency(string word) {
        int n = word.size();

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};

            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                freq[word[j] - 'a']++;
            }

            int expected = 0;
            bool ok = true;
            for (int k = 0; k < 26; k++) {
                if (freq[k] > 0) {
                    if (expected == 0) expected = freq[k];
                    else if (freq[k] != expected) {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok) return true;
        }

        return false;
    }
};