class Solution {
public:
    string decodeMessage(string key, string message) {

        unordered_map<char,char> mpp;

        char curr = 'a';

        for(char ch : key)
        {
            if(ch == ' ')
                continue;

            if(mpp.find(ch) == mpp.end())
            {
                mpp[ch] = curr;
                curr++;
            }
        }

        string ans = "";

        for(char ch : message)
        {
            if(ch == ' ')
                ans += ' ';
            else
                ans += mpp[ch];
        }

        return ans;
    }
};
