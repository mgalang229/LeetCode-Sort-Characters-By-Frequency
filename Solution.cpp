class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (char& c : s) {
            mp[c]++;
        }
        vector<pair<char, int>> vec;
        for (auto& p : mp) {
            vec.push_back(make_pair(p.first, p.second));
        }
        sort(vec.begin(), vec.end(), [](const pair<char, int>& p1, pair<char, int>& p2) {
           return p1.second > p2.second; 
        });
        string ans = "";
        for (pair<char, int>& p : vec) {
            ans += string(p.second, p.first);
        }
        return ans;
    }
};
