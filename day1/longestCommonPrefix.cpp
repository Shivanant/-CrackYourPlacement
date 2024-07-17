#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    if (strs.size() == 1) return strs[0];
    int cnt = strs[0].length();
    for (int i = 1; i < strs.size(); ++i) {
        int temp = 0;
        for (int j = 0; j < min(strs[i].length(), strs[i - 1].length()); j++) {
            if (strs[i][j] == strs[i - 1][j]) {
                temp++;
            } else {
                break;
            }
        }
        cnt = min(cnt, temp);
    }
    return strs[0].substr(0, cnt);
}

int main() {
    vector<string> strs;
    string input;
    int n;

    cout << "Enter the number of strings: ";
    cin >> n;
    cout << "Enter the strings:\n";

    for (int i = 0; i < n; ++i) {
        cin >> input;
        strs.push_back(input);
    }

    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
