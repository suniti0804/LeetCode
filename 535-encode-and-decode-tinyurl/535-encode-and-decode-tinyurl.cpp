class Solution {
public:

       
    string characters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        long long MOD = 56800235583; //6 ^62 
        unordered_map<string, string> urlMap;

        // Encodes a URL to a shortened URL.
        string encode(string longUrl) 
        {
            long long randomNum = rand() % MOD;
            string tinyThing = convertToB62(randomNum);
            while(urlMap.find(tinyThing) != urlMap.end()) {
                randomNum = rand() % MOD;
                tinyThing = convertToB62(randomNum);
            }
            urlMap[tinyThing] = longUrl;
            return tinyThing;
        }

        string convertToB62(long long num) {
            string ans = "";
            while(num) {
                int mod = num % 62;
                ans += characters[mod];
                num /= 62;
            }
            return ans;
        }

        // Decodes a shortened URL to its original URL.
        string decode(string shortUrl) {
            return urlMap[shortUrl];
        }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));