class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            if (c >= 'A' && c <= 'Z') {
                c += 32; // Difference between 'a' (97) and 'A' (65)
            }
        }
        return s;
    }
};