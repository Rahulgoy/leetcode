class Solution {
public:
    unordered_map<string,string> mp;
    // Encodes a URL to a shortened URL.
    
    string randomGen(){
        int len = 6;
        static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
        string temp;
        // temp.reverse(len);
        for(int i=0;i<len;i++){
            temp+=alphanum[rand()%(sizeof(alphanum)-1)];
        }
        return temp;
    }
    
    string encode(string longUrl) {
        string url="http://tinyurl.com/";
        url+=randomGen();
        
        mp[url]=longUrl;
        return url;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));