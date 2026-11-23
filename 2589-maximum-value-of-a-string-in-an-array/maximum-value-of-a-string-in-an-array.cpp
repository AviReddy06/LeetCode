class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxVal = 0;
        for (const string& s : strs) {
            int val = 0;
            bool isNumeric = true;
            for (char c : s) {
                if (c < '0' || c > '9') {
                    isNumeric = false;
                    break;
                }
                val = val * 10 + (c - '0');
            }
            maxVal = max(maxVal, isNumeric ? val : (int)s.size());
        }
        return maxVal;
    }
};