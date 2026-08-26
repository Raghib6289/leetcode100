class Solution {
public:
    vector<string> f(string s, int k) {
        vector<string>ans;
        int n = s.size(),count = 0;
        for (int start = 0; start < n; start++) {
            count = 0;
            for (int end = start; end < n; end++) {
                if (s[end] == '1') count++;
                if (count == k) {
                    ans.push_back(s.substr(start, end - start + 1));
                    break;
                }
            }
        }
        return ans;
    }
    string shortestBeautifulSubstring(string s, int k) {
        vector<string>tmp=f(s,k);
        if(tmp.size()==0) return "";
        sort(tmp.begin(), tmp.end(), [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });
        return tmp[0];
    }
};