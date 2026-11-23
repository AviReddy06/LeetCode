class Solution {
    unordered_map<string, string> longToShort;
    unordered_map<string, string> shortToLong;
    int id = 0;
    const string base = "http://tinyurl.com/";

public:
    string encode(string longUrl) {
        if (longToShort.count(longUrl)) {
            return longToShort[longUrl];
        }
        string shortUrl = base + to_string(id++);
        longToShort[longUrl] = shortUrl;
        shortToLong[shortUrl] = longUrl;
        return shortUrl;
    }

    string decode(string shortUrl) {
        return shortToLong[shortUrl];
    }
};