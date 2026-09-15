class Solution {
public:
    bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int max_count{ 0 };
        int current_count{ 0 };
        for (int i{ 0 }; i <= k - 1; ++i) {
            if (isvowel(s[i])) {
                ++current_count;
            }
        }
        max_count = current_count;
        for (int left{ 1 }; left <= s.length() - k; ++left) {
            if (isvowel(s[left - 1])) {
                --current_count;
            }
            if (isvowel(s[left + k - 1])) {
                ++current_count;
            }
            if (current_count > max_count) {
                max_count = current_count;
            }
        }
        return max_count;
    }
};