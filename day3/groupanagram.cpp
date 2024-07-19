#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for (const auto& it : strs) {
        string str = it;
        sort(str.begin(), str.end());
        mp[str].push_back(it);
    }
    vector<vector<string>> v;
    for (const auto& it : mp) {
        v.push_back(it.second);
    }
    return v;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    vector<vector<string>> result = groupAnagrams(strs);
    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : result) {
        cout << "[ ";
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
